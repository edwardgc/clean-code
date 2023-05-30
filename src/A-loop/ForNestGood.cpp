#include <vector>
#include <iostream>

using namespace std;

namespace good
{

int non_null_count = 0;

void printCandidate(vector<int> results)
{
    int count = results.size();

    for (int i = 0; i < count; i++)
    {
        if (results[i] == 0)
        {
            continue;
        }
        non_null_count++;
        if (results[i] <= 10)
        {
            continue;
        }
        cout << "candidate..." << endl;
    }
}

} //namespace good
