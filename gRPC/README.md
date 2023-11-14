





- abseil
https://github.com/abseil/abseil-cpp

git clone https://github.com/abseil/abseil-cpp.git
cd abseil-cpp
cmake .

- grpc
https://github.com/grpc/grpc


git clone https://github.com/grpc/grpc.git
cd grpc
git submodule update --init
cmake .


- protobuf
https://github.com/protocolbuffers/protobuf

https://github.com/protocolbuffers/protobuf
cd protobuf
git submodule update --init
cmake .


- gRPC에 protobuf, abseil 라이브러리 필요함

protoc -I=E:\ProtobufTest --grpc_out=.\ --cpp_out=.\ --csharp_out=.\ --plugin=protoc-gen-grpc=grpc_cpp_plugin.exe TestProtobuf.proto

-I : 프로토 파일 경로
--cpp_out : cpp 출력 경로
--csharp_out : cs 출력 경로
--grpc_out : grpc 출력 경로
--plugin : grpc를 함께 컴파일하려면, 플러그인 옵션을 추가한다.
TestProtobuf.proto : 프로토파일명