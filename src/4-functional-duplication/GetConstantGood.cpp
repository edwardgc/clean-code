
namespace good
{

constexpr unsigned int MAX_ALLOWED_CONNECTIONS = 1000;

const unsigned int g_maxNumOfAllowedConnections = MAX_ALLOWED_CONNECTIONS;

unsigned int getMaxNumOfAllowedConnections()
{
    return g_maxNumOfAllowedConnections;
}

} //good
