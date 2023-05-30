#include "../3-duplication-except-for-parameter/Append.hpp"

using namespace std;

namespace good
{

ostream& appendAddress(ostream& buf, const string& address)
{
    buf << address;
    return buf;
}

ostream& appendSrcAddress(ostream& buf, const Packet& packet)
{
    return appendAddress(buf, packet.srcAddress);
}

ostream& appendDstAddress(ostream& buf, const Packet& packet)
{
    return appendAddress(buf, packet.destAddress);
}

} //namespace good
