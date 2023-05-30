#include "Append.hpp"

using namespace std;

namespace bad
{

ostream& appendSrcAddress(ostream& buf, const Packet& packet)
{
    buf << (packet.srcAddress);
    return buf;
}

ostream& appendDstAddress(ostream& buf, const Packet& packet)
{
    buf << (packet.destAddress);
    return buf;
}

} //namespace bad
