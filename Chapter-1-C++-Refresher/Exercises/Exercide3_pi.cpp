#include <iostream>
using namespace std;

int main()
{
   int radius;
   // standard value of pi is
   float PI = 3.14159;

   cout << "Enter desired radius of the circle: " << endl;
   cin >> radius;
   // the formula to get the circumference of circle is
   int circumference = PI * radius * 2;
   // the formula to get the area of circle is
   int area = PI * radius * radius;

   cout << "The circumference of the circle is " << circumference << endl;
   cout << "The area of the circle is " << area << endl;

   return 0;
}