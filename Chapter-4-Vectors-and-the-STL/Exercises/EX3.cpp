#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << endl;

    vector<string> values;

    values = {"eggs","milk","sugar","chocolate","flour"};
    for (int i = 0; i < values.size(); i++)
    {
        cout<<values[i]<<endl;
    }
    //Part 2

    
    cout << endl;
    return 0;
}