//
// Created by christophpilz on 15.09.2021.
//
// Authors:
// - Christoph Pilz (christoph.pilz@v2c2.at)
//
// reference: https://bytefreaks.net/programming-2/c/asn1c-full-working-example-of-asn-1-in-cc
//
// List of possible improvements
// [] Implement sample implementation of generationDeltaTime
// [] Implement Hardcoded Hex/Base64 from cmd line
// [] Implement sending Hex/Base64 lines from cmd line
// [] Implement full creation of DENM
// [] Implement full creation of CAM
// [] Implement full creation of POI
// [] Implement full creation of SPATEM
// [] Implement full creation of MAPEM
// [] Implement full creation of IVIM
// [] Implement full creation of EV_RSR
// [] Implement full creation of TISTPGTRANSACTION
// [] Implement full creation of SREM
// [] Implement full creation of SSEM
// [] Implement full creation of EVCSN
// [] Implement full creation of SAEM
// [] Implement full creation of RTCMEM
//

#include <chrono>
#include <iostream>
#include <thread>
#include <string>

#include <csignal>

#include "zmq.hpp"

extern "C" {
#include "vcits/cam/CAM.h"
#include "vcits/denm/DENM.h"
#include "vcits/parser/Encoder.h"
}


// have means of clear exit on Ctrl+C
sig_atomic_t stopFlag = 0;

void signalHandler(int) {
    stopFlag = 1;
}

// prototypes
long getGenerationDeltaTime();
void create_msg_from_hex_dump(zmq::message_t &msg, std::string dump, size_t size);
void create_V2X_msg(zmq::message_t &msg, int msg_id);
void create_denm(zmq::message_t &msg);
void create_cam(zmq::message_t &msg);
void create_poi(zmq::message_t &msg);
void create_spatem(zmq::message_t &msg);
void create_mapem(zmq::message_t &msg);
void create_ivim(zmq::message_t &msg);
void create_ev_rsr(zmq::message_t &msg);
void create_tistpgtransaction(zmq::message_t &msg);
void create_srem(zmq::message_t &msg);
void create_ssem(zmq::message_t &msg);
void create_evcsn(zmq::message_t &msg);
void create_saem(zmq::message_t &msg);
void create_rtcmem(zmq::message_t &msg);

// helper functions
// Source https://stackoverflow.com/questions/17261798/converting-a-hex-string-to-a-byte-array
int char2int(char input)
{
    if(input >= '0' && input <= '9')
        return input - '0';
    if(input >= 'A' && input <= 'F')
        return input - 'A' + 10;
    if(input >= 'a' && input <= 'f')
        return input - 'a' + 10;
    throw std::invalid_argument("Invalid input string");
}

// Source: https://stackoverflow.com/questions/17261798/converting-a-hex-string-to-a-byte-array
// This function assumes src to be a zero terminated sanitized string with
// an even number of [0-9a-f] characters, and target to be sufficiently large
void hex2bin(const char* src, char* target)
{
    while(*src && src[1])
    {
        *(target++) = char2int(*src)*16 + char2int(src[1]);
        src += 2;
    }
}

// main
int main(int argc, char* argv[]) {
    std::cout << "main()" << std::endl;

    // have means of clear exit on Ctrl+C
    signal(SIGINT, &signalHandler);

    // variables
    int ret = 0;
    zmq::context_t zmq_context(1);
    zmq::socket_t zmq_socket_out(zmq_context, ZMQ_PUB);
    zmq::message_t envelope;
    zmq::message_t msg;
    std::string zmq_connect_string;
    std::string zmq_envelope;
    int msg_id = 0;
    int frequency_hz = 0;
    int cycle_count = 0;
    std::string dump = "";
    size_t size = 0;

    if(argc == 5) {
        zmq_connect_string.append("tcp://");
        zmq_connect_string.append(argv[1]);
        zmq_connect_string.append(":");
        zmq_connect_string.append(argv[2]);
        msg_id = atoi(argv[3]);
        frequency_hz = atoi(argv[4]);
    }  else {
        std::cout << "Usage: " << argv[0] << " <ip> <port> <msg_id> <frequency (1/10Hz)>" << std::endl;
        std::cout << "Message Types:" << std::endl
                  << "ItsPduHeader__messageID_denm = 1" << std::endl
                  << "ItsPduHeader__messageID_cam = 2" << std::endl
                  << "ItsPduHeader__messageID_poi = 3" << std::endl
                  << "ItsPduHeader__messageID_spatem = 4" << std::endl
                  << "ItsPduHeader__messageID_mapem = 5" << std::endl
                  << "ItsPduHeader__messageID_ivim = 6" << std::endl
                  << "ItsPduHeader__messageID_ev_rsr = 7" << std::endl
                  << "ItsPduHeader__messageID_tistpgtransaction = 8" << std::endl
                  << "ItsPduHeader__messageID_srem = 9" << std::endl
                  << "ItsPduHeader__messageID_ssem = 10" << std::endl
                  << "ItsPduHeader__messageID_evcsn = 11" << std::endl
                  << "ItsPduHeader__messageID_saem = 12" << std::endl
                  << "ItsPduHeader__messageID_rtcmem = 13" << std::endl;

        std::cout << std::endl;

        std::cout << "--- --- General Tipps --- ---" << std::endl;
        std::cout << "1. Use CLion or a similar IDe -> it helps stepping through the C type structs" << std::endl;
        std::cout << "2. Read carefully what is OPTIONAL -> sometimes it is still required, because you have to set the present flag to 0" << std::endl;
        std::cout << "3. Read carefully what are the value ranges! Else the message won't parse" << std::endl;
        std::cout << "4. Some choice objects still require set values -> may fail on encoding" << std::endl;
        std::cout << "5. You may also use the variables dump&size for hardcoded stuff" << std::endl;
        return 0;
    }

    // connect to ZMQ
    std::cout << "main(): " << "connect ZMQ (" << zmq_connect_string << ")" << std::endl;
    zmq_socket_out.connect(zmq_connect_string);

    // sending config
    zmq_envelope = "v2x.";

    std::cout << std::endl;
    std::cout << "main(): " << "main loop" << std::endl;
    while(!stopFlag) {
        // create v2x_msg
        create_V2X_msg(msg, msg_id);

        // send v2x_msg
        if(msg.size() > 0){
            // send envelope for message
            envelope = zmq::message_t(zmq_envelope);
            zmq_socket_out.send(envelope, zmq::send_flags::sndmore);

            // ZMQ will swap the msg for an empty message
            zmq_socket_out.send(msg, zmq::send_flags::none);
            std::cout << "main(): " << "sent msg #" << cycle_count << std::endl;
            cycle_count++;
        }
        else {
            std::cout << "main(): " << "no message created for msg_id: " << msg_id << std::endl;
        }
        std::this_thread::sleep_for(std::chrono::milliseconds(1000/frequency_hz));
    }

    std::cout << "done" << std::endl;
    return ret;
}

// helpers

long getGenerationDeltaTime(){
//    ETSI EN 302 637-2 V1.3.1 (Annex B3)
//      - Time corresponding to the time of the reference position in the CAM, considered as time of the CAM generation.
//          -> meaning the timestamp of the situation, i.e., the exact time matching the GPS position, when the CAM was generated
//          -> in other words: the timestamp matching the GPS position
//      - calculation: generationDeltaTime = TimestampIts mod 65 536
//          -> TimestampIts represents an integer value in milliseconds since 2004-01-01T00:00:00:000Z as defined in ETSI TS 102 894-2 [2].
//              ... TimestampIts = zulu_time_now - 2004-01-01T00:00:00:000Z
    std::cout << "getGenerationDeltaTime(): not yet implemented - read comments in code" << std::endl;
    return 0;
}

void create_msg_from_hex_dump(zmq::message_t &msg, std::string dump, size_t size) {
    // variables
    assert(size = dump.size()/2);   // just to be sure its hex encoded properly

    void *final_buffer = nullptr;
    ssize_t final_size = 0;

    // buffer
    final_size = size;
    final_buffer = (char*) malloc(final_size);
    hex2bin(dump.c_str(), (char*) final_buffer);

    if(final_size > 0){
        std::cout << "MSG created successfully with size " << final_size << std::endl;
        msg = zmq::message_t(final_buffer, final_size);
        free(final_buffer);
    } else {
        std::cout << std::endl;
        std::cout << "MSG creation failed - you should probably stop the program" << std::endl;
    }
}
void create_V2X_msg(zmq::message_t &msg, int msg_id) {

    std::cout << std::endl;
    std::cout << "*** *** V2X Message Creation *** ***" << std::endl;
    switch (msg_id) {
        case ItsPduHeader__messageID_denm:
            create_denm(msg);
            break;
        case ItsPduHeader__messageID_cam:
            create_cam(msg);
            break;
        case ItsPduHeader__messageID_poi:
            create_poi(msg);
            break;
        case ItsPduHeader__messageID_spatem:
            create_spatem(msg);
            break;
        case ItsPduHeader__messageID_mapem:
            create_mapem(msg);
            break;
        case ItsPduHeader__messageID_ivim:
            create_ivim(msg);
            break;
        case ItsPduHeader__messageID_ev_rsr:
            create_ev_rsr(msg);
            break;
        case ItsPduHeader__messageID_tistpgtransaction:
            create_tistpgtransaction(msg);
            break;
        case ItsPduHeader__messageID_srem:
            create_srem(msg);
            break;
        case ItsPduHeader__messageID_ssem:
            create_ssem(msg);
            break;
        case ItsPduHeader__messageID_evcsn:
            create_evcsn(msg);
            break;
        case ItsPduHeader__messageID_saem:
            create_saem(msg);
            break;
        case ItsPduHeader__messageID_rtcmem:
            create_rtcmem(msg);
            break;
        default:
            std::cout << "Message not supported by this demo" << std::endl;
            break;
    }
}

// dedicated creating functions
void create_denm(zmq::message_t &msg){
    std::cout << "--- --- --- DENM --- --- ---" << std::endl;

    // variables
    DENM_t denm;
    long generationDeltaTime = getGenerationDeltaTime();
    void *final_denm_buffer = nullptr;
    ssize_t final_denm_size = 0;

    // reset data structure
    memset((void *)&denm, 0, sizeof(denm));

    // set header
    denm.header.protocolVersion = 2; // ?
    denm.header.messageID = 1;
    denm.header.stationID = 1111; // ?


    if(final_denm_size > 0){
        std::cout << "DENM created successfully with size " << final_denm_size << std::endl;
        msg = zmq::message_t(final_denm_buffer, final_denm_size);
        free(final_denm_buffer);
    } else {
        std::cout << std::endl;
        std::cout << "DENM creation failed - you should probably stop the program" << std::endl;
    }
}
void create_cam(zmq::message_t &msg){
    std::cout << "--- --- --- CAM --- --- ---" << std::endl;

    // variables
    CAM_t  cam;
    long generationDeltaTime = getGenerationDeltaTime();
    void *final_cam_buffer = nullptr;
    ssize_t final_cam_size = 0;

    // reset data structure
    memset((void *)&cam, 0, sizeof(cam));

    // set header
    cam.header.protocolVersion = 2; // V2 is most recent CDD header
    cam.header.messageID = 2; // CAM
    cam.header.stationID = 1337;

    cam.cam.generationDeltaTime = generationDeltaTime; // TimestampIts mod 65 536; TimestampIts = integer value in milliseconds since 2004-01-01T00:00:00:000Z as defined in ETSI TS 102 894-2
    cam.cam.camParameters.basicContainer.stationType = StationType_unknown; // StationType enum -> important: Optional parameters get mandatory, depending on station type
    cam.cam.camParameters.basicContainer.referencePosition.latitude = Latitude_unavailable; // enum Latitude -> Latitude_oneMicrodegreeNorth = 10
    cam.cam.camParameters.basicContainer.referencePosition.longitude = Longitude_unavailable; // enum Longitude -> Longitude_oneMicrodegreeEast = 10
    cam.cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMajorConfidence = SemiAxisLength_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMinorConfidence = SemiAxisLength_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.positionConfidenceEllipse.semiMajorOrientation = HeadingValue_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.altitude.altitudeValue = AltitudeValue_unavailable;
    cam.cam.camParameters.basicContainer.referencePosition.altitude.altitudeConfidence = AltitudeConfidence_unavailable;

    cam.cam.camParameters.highFrequencyContainer.present = HighFrequencyContainer_PR_basicVehicleContainerHighFrequency;
    // IMPORTANT! present can not just be HighFrequencyContainer_PR_NOTHING, because encoding will fail
    // -> there is a bug in the ASN.1, which makes the basicVehicleContainerHighFrequency needed
    // -> rsuContainerHighFrequency has a subvalue that is a pointer. it is thus not needed to be implemented
    // -> the highFrequencyContainer has the following default parameters that will cause an "encoding failed -> check if values are out of range" error
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.heading.headingConfidence = HeadingConfidence_unavailable;
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.speed.speedConfidence = SpeedConfidence_unavailable;
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleLength.vehicleLengthValue = VehicleLengthValue_unavailable;
    cam.cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.vehicleWidth = VehicleWidth_unavailable;

    // OPTIONALs are all set to zero with memset earlier
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.accelerationControl
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.lanePosition
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.steeringWheelAngle
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.lateralAcceleration
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.verticalAcceleration
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.performanceClass
//    cam->cam.camParameters.highFrequencyContainer.choice.basicVehicleContainerHighFrequency.cenDsrcTollingZone

    // HighFrequencyContainer could also be HighFrequencyContainer_PR_rsuContainerHighFrequency
    // -> not implemented as example

    cam.cam.camParameters.lowFrequencyContainer = nullptr; // OPTIONAL not implemented in demo

    cam.cam.camParameters.specialVehicleContainer = nullptr; // OPTIONAL not implemented in demo

    Encoder::validate_constraints(&asn_DEF_CAM, &cam);
    final_cam_size = Encoder::encode(&asn_DEF_CAM, nullptr, &cam, &final_cam_buffer);

    if(final_cam_size > 0){
        std::cout << "CAM created successfully with size " << final_cam_size << std::endl;
        msg = zmq::message_t(final_cam_buffer, final_cam_size);
        free(final_cam_buffer);
    } else {
        std::cout << std::endl;
        std::cout << "CAM creation failed - you should probably stop the program" << std::endl;
    }
}
void create_poi(zmq::message_t &msg){
    std::cout << "--- --- --- POI --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_poi(): " << "not yet implemented" << std::endl;
}
void create_spatem(zmq::message_t &msg){
    std::cout << "--- --- --- SPATEM --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_spatem(): " << "not yet implemented" << std::endl;
}
void create_mapem(zmq::message_t &msg){
    std::cout << "--- --- --- MAPEM --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_mapem(): " << "not yet implemented" << std::endl;
}
void create_ivim(zmq::message_t &msg){
    std::cout << "--- --- --- IVIM --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_ivim(): " << "not yet implemented" << std::endl;
}
void create_ev_rsr(zmq::message_t &msg){
    std::cout << "--- --- --- EV RSR --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_ev_rsr(): " << "not yet implemented" << std::endl;
}
void create_tistpgtransaction(zmq::message_t &msg){
    std::cout << "--- --- --- TISTPGTRANSACTION --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_tistpgtransaction(): " << "not yet implemented" << std::endl;
}
void create_srem(zmq::message_t &msg){
    std::cout << "--- --- --- SREM --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_srem(): " << "not yet implemented" << std::endl;
}
void create_ssem(zmq::message_t &msg){
    std::cout << "--- --- --- SSEM --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_ssem(): " << "not yet implemented" << std::endl;
}
void create_evcsn(zmq::message_t &msg){
    std::cout << "--- --- --- EVCSN --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_evcsn(): " << "not yet implemented" << std::endl;
}
void create_saem(zmq::message_t &msg){
    std::cout << "--- --- --- SAEM --- --- ---" << std::endl;
    if(msg.size() == 0)
        std::cout << "create_saem(): " << "not yet implemented" << std::endl;
}
void create_rtcmem(zmq::message_t &msg){
    std::cout << "--- --- --- RTCMEM --- --- ---" << std::endl;

    if(msg.size() == 0)
        std::cout << "create_rtcmem(): " << "not yet implemented" << std::endl;
}
