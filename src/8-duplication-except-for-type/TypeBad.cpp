
namespace bad
{

const int &max (const int &a, const int &b)
{
    return a < b ? b : a;
}

const double &max (const double &a, const double &b)
{
    return  a < b ? b : a;
}

} //namespace bad
