#include <iostream>
using namespace std; 

int main()
{
    cout << endl;
    int a = 10;
    int b = 5;
    // /t is used as a tab to indent spaces

    cout << "x value\t"
         << " y value"
         << "  results" << endl;
    // All mathematical operations are performed here

    cout << "  " << a << "\t  " << b << "\t    " << a + b << endl;
    cout << "  " << a << "\t  " << b << "\t    " << a - 3 << endl;
    cout << "  " << a << "\t  " << b << "\t    " << a * b * b << endl;
    cout << "  " << a << "\t  " << b << "\t    " << a / 2 << endl;
    cout << "  " << a << "\t  " << b << "\t    " << a % 4 << endl;
    cout << endl;
    return 0;
}