#include <iostream>
using namespace std;


int main(){
    cout<<endl;

    cout<< "Enter a number to check evern or not: " ;
    int num1;
    cin>>num1;

// short hand if else statement is used to determine weather it is even ot not 
    string result = (num1%2==0) ? "even" : "not even";

    cout<<result;

    cout<<endl;
return 0;
}