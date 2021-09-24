#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    string name, hometown;
    int age;

    cout<<"Enter name: ";
    cin >> name;
    cout<<"Enter age: ";
    cin >> age;
    cout<<"Enter hometown: ";
    cin >> hometown;
    cout << "\n\nyour name is :" << name << endl
         << "Your age is:" << age << endl
         << "Your hometown is :" << hometown;

    cout << endl;
    return 0;
}