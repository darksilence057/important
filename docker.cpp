check docker --version
docker info
docker pull ubuntu
docker images
docker run -it ubuntu
now inside container:
ls
mkdir demo
exit

docker ps
docker ps -a
docker start container_id
docker stop container_id

now check inside docker there will be a file which we created inside files it means we can creat files only wiithin container to run