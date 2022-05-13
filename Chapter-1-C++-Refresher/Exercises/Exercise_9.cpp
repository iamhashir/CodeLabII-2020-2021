#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int triangle = 180;
    int side1, side2, side3;
    // input is taken from the user of the side of triangle
    cout << "Enter the value of 1st side of triangle: ";
    cin >> side1;
    cout << "Enter the value of 2nd side of triangle: ";
    cin >> side2;
    cout << "Enter the value of 3rd side of triangle: ";
    cin >> side3;

    // All formulas to check isocelless , equal triangle and scalne traingle are set here
    if (side1 == side2 && side2 == side3)
    {
        cout << "It is a equal triangle";
    }
    else if (side1 == side2 || side2 == side3 || side3 == side1)
    {
        cout << "It is a isoceless triangle";
    }
    else
    {
        cout << "It is a scalene triangle";
    }

    cout << "";

    cout << endl;
    return 0;
}
