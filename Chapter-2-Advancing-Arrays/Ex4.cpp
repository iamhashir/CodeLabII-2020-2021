#include <iostream>
#include <array>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    array<int, 6> input;
    // loop is used to iterate user input and ask user to enter  
    for (int i = 1; i < input.size(); i++)
    {
        cout << "Enter Number " << i << "):\n";
        cin >> input[i];
        cout << endl;
    }
    // loop is used to iterate counting numbers and print array balues
    for (int i = 1; i < input.size(); i++)
    {

        cout<<"The number you entered is "<<i<<"): \t"<<input[i]<<" "<<endl;
    }
    cout << endl;
    return 0;
}