// gRPCServer.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.

#include <iostream>
#include <grpc/grpc.h>
#include <grpcpp/security/server_credentials.h>
#include <grpcpp/server.h>
#include <grpcpp/server_builder.h>
#include <grpcpp/server_context.h>

#include "pingpong.grpc.pb.h"
#include "pingpong.pb.h"


using grpc::Server;
using grpc::ServerBuilder;
using grpc::ServerContext;
using grpc::ServerReader;
using grpc::ServerWriter;
using grpc::Status;

using dy::PingPongService;
using dy::Ping;
using dy::Pong;

class Listernr final : public PingPongService::Service {
    Status pingpong(ServerContext* context, const Ping*, Pong* pong)  {

        return Status::OK;
    }
};

int main()
{
    std::cout << "Hello World!\n";

    Listernr service;
    std::string address("0.0.0.0:8888");

    grpc::ServerBuilder builder;
    builder.AddListeningPort(address, grpc::InsecureServerCredentials());
    builder.RegisterService(&service);

    std::unique_ptr<Server> server(builder.BuildAndStart());
    std::cout << "server listening on " << address << std::endl;
    server->Wait();

}
