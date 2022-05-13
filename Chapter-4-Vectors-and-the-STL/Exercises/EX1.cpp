#include <iostream>
#include <vector>

using namespace std;
int main()
{
    cout << endl;
    // a vector is initialised
    vector<int> number;

    cout << "Enter 5 numbers:- ";
    // values are stored inside an array using a loop
    for (int i = 0; i < 5; i++)
    {
        int user_input;
        cin >> user_input;
        // a by default feature of array push_back is being used here
        number.push_back(user_input);
    }
    cout << endl;
    // stored values inside arrray is now outputted using a for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "number " << i << " is " << number[i] << endl;
    }

    cout << endl;
    return 0;
}