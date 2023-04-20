# TUTORIAL

### RECEIVER Github-Repository: [here](https://github.com/virtual-vehicle/vehicle_captain_routing_receiver_example)
### SENDER Github-Repository: [here](https://github.com/virtual-vehicle/vehicle_captain_routing_sender_example)

## Option 1 - Demo-Environment (one docker for each sender and receiver)

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

## Option 2 - Dev-Environment (Remote Host)

### SENDER Setup
#### Example:
```bash
./docker_dev_build_and_run.sh
```

#### Toolchain Configuration:
- File -> Settings -> Build, Execution, Deployment -> Toolchains
- Click "+" and "New Remote Host"
- Configure new remote (SSH Configurations):
    - Host: localhost
    - Port: 2222
    - Username: user
    - Password: password

#### CMake Configuration:
- File -> Settings -> Build, Execution, Deployment -> CMake
- Click "+" and name it "Debug-Remote" for example
- Select the previously created toolchain
- Reload the CMake Project (open CMake file in CLion and click Reload CMake project)

```bash
docker exec -it cpp_sender-dev ./cppSender 172.20.8.47 5555 2 1
```

### RECEIVER Setup
#### Example:
```bash
./docker_dev_build_and_run.sh
```

##### Do the Toolchain Configuration (see above) and then execute the following command:
```bash
docker exec -it cpp_receiver-dev ./cppReceiver 172.20.8.108 5556
```