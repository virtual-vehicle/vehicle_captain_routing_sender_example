docker build -t vehicle_captain/cpp_sender_client:0.1 -f Dockerfiles/Dockerfile.demo .
docker network create vc-routing-bridge
docker run -t -d --name cpp_sender-demo --network=vc-routing-bridge vehicle_captain/cpp_sender_client:0.1
