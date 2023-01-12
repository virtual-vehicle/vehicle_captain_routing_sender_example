docker build -t vehicle_captain/cpp_sender_client:0.1 -f Dockerfiles/Dockerfile.demo .
docker run -t -d --name cpp_sender-demo vehicle_captain/cpp_sender_client:0.1
