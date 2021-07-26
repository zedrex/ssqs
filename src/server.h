#ifndef SERVER_H
#define SERVER_H

enum class ServerStatus
{
    IDLE,
    BUSY
};

class Server
{
private:
    ServerStatus status;

public:
    Server();

    ServerStatus GetServerStatus();
    void SetServerStatus(ServerStatus status);
};

#endif