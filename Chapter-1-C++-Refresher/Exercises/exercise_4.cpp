#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    string name, hometown;
    int age;

    cout << "Enter name: ";
    // the input is taken from user and stored in name variable
    cin >> name;
    cout << "Enter age: ";
    // the input is taken from user and stored in age variable
    cin >> age;
    cout << "Enter hometown: ";
    // the input is taken from user and stored in hometown variable
    cin >> hometown;
    
    // ALL the inputted data stored in variable is presented to the screen
    cout << "\n\nyour name is :" << name << endl
         << "Your age is:" << age << endl
         << "Your hometown is :" << hometown;

    cout << endl;
    return 0;
}