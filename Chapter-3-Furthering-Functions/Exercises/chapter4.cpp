#include <iostream>
using namespace std;
// functions are first declared here
int Area_of_square();
int Area_of_circle();
int Area_of_triangle();
int main()
{
    int selection;
    cout << endl;
    // menu is presented to console
    cout << "What do you want to do: (Select 1,2,3)\n";
    cout << "\n1 : Calculate the area of a square\n2 : Calculate the area of a circle\n3 : Calculate the area of a triangle.";
    cout << endl;
    cin >> selection;
    cout << endl;
    // according to selected choice function is called
    switch (selection)
    {
    case 1:
        Area_of_square();
        break;
    case 2:
        Area_of_circle();
        break;
    case 3:
        Area_of_triangle();
        break;
    default:
        break;
    }
    return 0;
}
// area of square is calculated in this function
int Area_of_square()
{
    cout << "\nTo calculate area of square enter the length of a side: ";
    cout << endl;
    int side;
    cin >> side;
    cout << endl;
    // formula to calculate area of square
    int result = side * side;
    cout << "The area of square is: " << result << endl;
}
// area of square is calculated in this function
int Area_of_circle()
{
    cout << "\nTo calculate area of square enter the radius of a side: ";
    cout << endl;
    int radius;
    // pie has a constant value
    float pie = 3.14159;
    cin >> radius;
    cout << endl;
    // formula to calculate area of circle
    float result = pie * (radius * radius);
    cout << "The area of square is: " << result << endl;
}
// area of triangle is calculated in this function
int Area_of_triangle()
{

    cout << "\nTo calculate area of square enter the length of a side: ";
    cout << endl;
    int side;
    cin >> side;
    cout << endl;
    // formula to calculate area of triangle
    int result = side * side;
    cout << "The area of square is: " << result << endl;
}