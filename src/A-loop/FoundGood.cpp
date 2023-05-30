#include <vector>

using namespace std;
namespace
{

constexpr size_t MAX_RECORDS = 10;

}
namespace good
{

vector<int> entry;

bool found(int testValue)
{
    bool found = false;
    for (int i = 0; i < MAX_RECORDS; i++)
    {
        if (entry[i] == testValue)
        {
            found = true;
            break;
        }
    }
    //lots of code
    return found;
}

} //namespace good
