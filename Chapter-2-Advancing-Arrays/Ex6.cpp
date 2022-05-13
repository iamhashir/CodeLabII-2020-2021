#include <iostream>
#include <array>
using namespace std;
int main()
{
    cout << endl;
    cout << "";
    array<int, 11> values;

    cout << "\t\t****Enter Ten integer values: ****\n\n";
    // loop is used to iterate numbers and ask user to input values and store ina rray
    for (int i = 1; i < values.size(); i++)
    {
        cout << "Enter " << i << " integer values: ";
        cin >> values[i];
    }
    int greatest = 0;
    int lowest = values[0];
    // for loop is used to itearate each vector value and compare it is smaller or greatest
    for (int i = 1; i < values.size(); i++)
    {
        if (greatest < values[i])
        {
            greatest = values[i];
        }
        if (lowest > values[i])
        {
            lowest = values[i];
        }
    }
    cout << "The greatest is " << greatest;
    cout << " The lowest is " << lowest;
    
    cout << endl;
    return 0;
}