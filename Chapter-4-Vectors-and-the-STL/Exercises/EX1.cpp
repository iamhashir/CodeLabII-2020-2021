#include <iostream>
#include <vector>

using namespace std;
int main()
{
    cout << endl;
    vector<int> number;

    cout << "Enter 5 numbers:- ";
    for (int i = 0; i < 5; i++)
    {
        int user_input;
        cin >> user_input;
        number.push_back(user_input);
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"number "<<i<<" is " << number[i] << endl;
    }

    cout << endl;
    return 0;
}