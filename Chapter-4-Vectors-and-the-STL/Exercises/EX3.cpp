#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << endl;

    vector<string> values;

    values = {"eggs","milk","sugar","chocolate","flour"};
    // values of the vector is being printed through loop
    for (int i = 0; i < values.size(); i++)
    {
        cout<<values[i]<<endl;
    }

    
    cout << endl;
    return 0;
}