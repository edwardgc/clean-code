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

namespace bad
{

void compute()
{
    Server *server = getServer();
    if (server != nullptr)
    {
        Client *client = server->getClient();
        if (client != nullptr)
        {
            Request *current = client->getRequest();
            if (current != nullptr)
            {
                processRequest(current);
            }
        }
    }
}

} //namespace bad
