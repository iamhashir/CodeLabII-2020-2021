#include <iostream>
using namespace std;


int main(){
   int radius;
   float PI = 3.14159;
   
   cout<<"Enter desired radius of the circle: "<<endl;
   cin>>radius;

   int circumference = PI*radius*2;
   int area = PI * radius * radius;

   cout<<"The circumference of the circle is "<<circumference<<endl;
   cout<<"The area of the circle is "<<area<<endl;

   return 0;
}