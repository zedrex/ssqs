#include "server.h"

Server::Server()
{
    this->status = ServerStatus::IDLE;
}

ServerStatus Server::GetServerStatus()
{
    return this->status;
}

void Server::SetServerStatus(ServerStatus status)
{
    this->status = status;
}