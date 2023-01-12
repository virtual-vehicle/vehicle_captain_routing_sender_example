PORT="2222"

docker build -t clion/lw_remote-cpp_sender-env:0.1 -f Dockerfiles/Dockerfile.remote-cpp-env .
docker run -d --cap-add sys_ptrace -p127.0.0.1:$PORT:22 --name cpp_sender-dev clion/lw_remote-cpp_sender-env:0.1
ssh-keygen -f "$HOME/.ssh/known_hosts" -R "[localhost]:$PORT"
