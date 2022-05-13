#include <iostream>
using namespace std;

// sum function is declared first
int sum (int num1 , int num2);
int main(){
    cout<<endl;
    int num1,num2;
    cout<<"enter num1: ";
    cin>>num1;
    cout<< "enter num2: " ;
    cin>>num2;
    cout<<endl;
    // sum function is called answer of sum is returned through the sum function
    cout<<sum(num1,num2);
    cout<<endl;
return 0;
}
// sum function is defined here
int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}