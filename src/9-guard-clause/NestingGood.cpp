#include <memory>

using namespace std;

namespace
{

class Request
{
};

class Client
{
public:
    Request* getRequest()
    {
        return new Request();
    }
};

class Server
{
public:
    Client* getClient()
    {
        return new Client();
    }
};

Server* getServer()
{
    return new Server();
}

void processRequest(Request *reqeust)
{
}

} //namespace

namespace good
{

void compute()
{
    Server *server = getServer();
    if (server == nullptr)
    {
        return;
    }
    Client *client = server->getClient();
    if (client == nullptr)
    {
        return;
    }
    Request *current = client->getRequest();
    if (current == nullptr)
    {
        return;
    }
    processRequest(current);
}

} //namespace good
