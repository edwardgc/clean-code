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
    shared_ptr<Request> getRequest()
    {
        return make_shared<Request>();
    }
};

class Server
{
public:
    shared_ptr<Client> getClient()
    {
        return make_shared<Client>();
    }
};

shared_ptr<Server> getServer()
{
    return make_shared<Server>();
}

void processRequest(shared_ptr<Request> request)
{
}

} //namespace

namespace good
{



void process()
{
    shared_ptr<Server> server = getServer();
    if (!server)
    {
        return;
    }
    shared_ptr<Client> client = server->getClient();
    if (!client)
    {
        return;
    }
    shared_ptr<Request> current = client->getRequest();
    if (!current)
    {
        return;
    }
    processRequest(current);
}

} //namespace good
