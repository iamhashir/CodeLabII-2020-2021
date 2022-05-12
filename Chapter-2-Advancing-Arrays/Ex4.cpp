#include <iostream>
#include <array>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    array<int, 6> input;

    for (int i = 1; i < input.size(); i++)
    {
        cout << "Enter Number " << i << "):\n";
        cin >> input[i];
        cout << endl;
    }
    for (int i = 1; i < input.size(); i++)
    {

        cout<<"The number you entered is "<<i<<"): \t"<<input[i]<<" "<<endl;

    }
    

    cout << endl;
    return 0;
}