# TUTORIAL

### RECEIVER Github-Repository: [here](https://github.com/virtual-vehicle/vehicle_captain_routing_receiver_example)
### SENDER Github-Repository: [here](https://github.com/virtual-vehicle/vehicle_captain_routing_sender_example)

## Demo-Environment (one docker for each sender and receiver)

### Communication between sender and receiver docker
Both the docker for sender and receiver have to be running.
Import:
- Use the right IP-address for the program executions of the containers (see: "Setup Guide").
- Ports: Receiver listens on a available port (i.e.: 5557). The sender is sending the messages to the IP-address of the receiver container on the port 5557. The receiver is receiving the messages on its localhost 5557.

### SENDER Setup
- git clone CPP-Sender repo
- in root folder execute docker script:

  ```bash
  ./docker_demo_build_and_run.sh
  docker exec cpp_sender-demo ./cppSender cpp_receiver-demo 5557 2 1
  ```

### RECEIVER Setup
- git clone CPP-Sender repo
- in root folder execute docker script:

  ```bash
  ./docker_demo_build_and_run.sh
  docker exec cpp_receiver-demo ./cppReceiver local cpp_receiver-demo 5557
  ```
  