#include <iostream>
using namespace std;


int main(){
    cout<<endl;

    int num1,num2,num3;
    int num2_is_greater;
    int num3_is_greater;
    
    cout<< "Enter num1: ";
    cin>> num1 ;
    cout<< "Enter num2: ";
    cin>> num2 ;
    cout<< "Enter num3: " ;
    cin>> num3 ;

    cout<<endl;

    // string num1_is_greater =;

    cout << ((num1 > num2 && num1 > num3) ? "larger num1: " : "NULL");
    cout << ((num2 > num1 && num2 > num3) ? "larger num2: " : "NULL");
    cout << ((num3 > num1 && num3 > num1) ? "larger num3: " : "NULL");
    // if (num1>num2 && num1>num3)
    // {
    //     cout<< "larger num1: "<<num1;
    // }
    // if(num2>num1 && num2>num3){
    //     cout<<"larger num2: "<<num2;
    // }
    // if(num3>num1 && num3>num1) {
    //     cout<<"larger num3: "<<num3;
    // }

    cout<<endl;
return 0;
}