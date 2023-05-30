
namespace good
{

template<class T>
const T& max(const T &a, const T &b)
{
    return a < b ? b : a;
}

} //namespace good
