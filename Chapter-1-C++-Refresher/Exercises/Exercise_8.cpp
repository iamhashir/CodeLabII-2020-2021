#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int num1;
    int num2;
    // the number is now taken as an input from the user to get the desired result
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;
    cout << endl;

    cout << "x value\t"
         << " y value"
         << "  results" << endl;
        //  All mathematical operations ar e performed over here
    cout << "  "<<num1 << "\t  " <<num2 << "\t    "<< num1 + num2 << endl;
    cout << "  "<<num1 << "\t  " <<num2 << "\t    "<<num1 - num2 << endl;
    cout << "  "<<num1 << "\t  " <<num2 << "\t    "<< num1 * num2 << endl;
    cout << "  "<<num1 << "\t  " <<num2 << "\t    "<<num1 / num2 << endl;
    cout << "  "<<num1 << "\t  " <<num2 << "\t    "<<num1 % num2 << endl;
    cout << endl;
    return 0;

    cout << "";

    cout << endl;
    return 0;
}