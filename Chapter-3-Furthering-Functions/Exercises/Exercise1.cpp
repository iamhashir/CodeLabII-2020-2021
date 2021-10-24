#include <iostream>
using namespace std;

int sum (int num1 , int num2);

int main(){
    cout<<endl;
    int num1,num2;
    cout<<"enter num1: ";
    cin>>num1;
    cout<< "enter num2: " ;
    cin>>num2;
    cout<<endl;
    cout<<sum(num1,num2);
    cout<<endl;
return 0;
}
int sum(int num1, int num2)
{
    int result = num1 + num2;
    return result;
}