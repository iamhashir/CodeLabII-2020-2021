#include <iostream>
using namespace std;


int main(){
    cout<<endl;

    cout<< "Enter a number to check evern or not: " ;
    int num1;
    cin>>num1;

    string result = (num1%2==0) ? "even" : "not even";

    cout<<result;

    cout<<endl;
return 0;
}