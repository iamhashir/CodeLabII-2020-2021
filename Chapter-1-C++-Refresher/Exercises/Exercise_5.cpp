#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    // array of 3 containers named nums is made
    int nums[3];
    cout << "Enter 3 nums: ";
    // loop is used to get the input from the user
    for (int i = 0; i < 3; i++)
    {
        cin >> nums[i];
    }
    cout << endl
         << "Your numbers forward: " << endl;
    // loop is used to print the input from the user in forward order
    for (int i = 0; i < 3; i++)
    {
        cout << endl
             << nums[i] << endl;
    }
    cout << endl
         << "Your numbers reversed: " << endl;
    // loop is used to print the input from the user in reverse order
    for (int i = 2; i > -1; i--)
    {
        cout << endl
             << nums[i] << endl;
        ;
    }

    cout << "";

    cout << endl;
    return 0;
}