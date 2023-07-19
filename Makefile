all: scg_cpp scg_csharp run

scg_cpp:
	docker build -t scg_cpp -f cpp_project/Dockerfile_cpp .

scg_csharp:
	docker build -t scg_csharp -f csharp_project/Dockerfile_csharp .

run:
	docker run -it scg_cpp 
	docker run -it scg_csharp
