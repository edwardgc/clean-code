#include <vector>

using namespace std;
namespace
{

constexpr int MAX_RECORDS = 10;

}
namespace bad
{

vector<int> entry;

bool found(int testValue)
{
    int recordCount = 0;
    for (recordCount = 0; recordCount < MAX_RECORDS; recordCount++)
    {
        if (entry[recordCount] == testValue)
        {
            break;
        }
    }
    //lots of code
    if (recordCount < MAX_RECORDS)
    {
        return true;
    }
    else
    {
        return false;
    }
}

} //namespace bad
