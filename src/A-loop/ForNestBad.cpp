#include <vector>
#include <iostream>

using namespace std;

namespace bad
{

int non_null_count = 0;

void printCandidate(const vector<int> results)
{
    int count = results.size();

    for (int i = 0; i < count; i++)
    {
        if (results[i] != 0)
        {
            non_null_count++;
            if (results[i] > 10)
            {
                cout << "candidate..." << endl;
            }
        }
    }
}

} //namespace bad
