#include <iostream>
using namespace std;

// int main()
// {
//     string name = "hashir";
//     string hometown = "Abu dahbi";
//     int age = 19;

//     // all the data a stored in the variables are getting print through single cout
//     cout << name << endl
//          << hometown << endl
//          << age;
//     cout << endl;
//     return 0;
// }
int main()
{
    string name;
    string hometown;
    //  All variable's values are stored over here
    int age;
    cout << "Enter your name:- ";
    cin >> name;
    cout << "Enter your age:- ";
    cin >> age;
    cout << "Enter your Hometown:- ";
    cin >> hometown;
    cout << endl;
    // user input is taken through cin
    cout << "Your name is " << name << "\nYour age is " << age << "\nYour hometown is " << hometown;
    // all the data a stored in the variables are getting print through single cout
    return 0;
}