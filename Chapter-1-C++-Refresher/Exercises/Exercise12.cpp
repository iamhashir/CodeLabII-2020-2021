#include <iostream>
#include <array>
using namespace std;


int main(){
    cout<<endl;

    int num1,num2,num3;
    
    cout<< "Enter num1: ";
    cin>> num1 ;
    cout<< "Enter num2: ";
    cin>> num2 ;
    cout<< "Enter num3: " ;
    cin>> num3 ;

    cout<<endl;

    cout << ((num1 > num2 && num1 > num3) ? "larger num1 " : " ") ;
    cout << ((num2 > num1 && num2 > num3) ? "larger num2 " : " ") ;
    cout << ((num3 > num1 && num3 > num1) ? "larger num3 " : " ");

    cout<<endl;
return 0;
}