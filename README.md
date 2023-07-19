
# Coding Challenge 
## Google Protocol Buffers

Welcome! Glad you found this page. To build and run both C++ and C# projects 
ensure you have docker installed, then type `make`. 

```sh
make
```

This will build each application into a unique Docker image,
then run each executable in a container.

For troubleshooting please try the commands below:

### C++ Project
```sh
docker build -t scg_cpp -f cpp_project/Dockerfile_cpp . 
docker run -it scg_cpp
```


### C# Project
```sh
docker build -t scg_csharp -f csharp_project/Dockerfile_csharp . 
docker run -it scg_csharp
```


## Output

Successful output will appear as below:

```
docker run -it scg_cpp
Attempting to read pb file...
{
"Notes": "Hello From SCG",
"Timestamp": "2022-05-04T20:06:47.526958900Z"
}

docker run -it scg_csharp
{"Timestamp":{"Seconds":1651694807,"Nanos":526958900},"Notes":"Hello From SCG"}
```
