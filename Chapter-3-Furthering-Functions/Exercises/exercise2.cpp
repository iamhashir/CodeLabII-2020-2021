#include <iostream>
using namespace std;
// this function is created to double every number passed into it
int doubler(int doubled){
    int result = doubled+doubled;
    cout << "Result in function by value: " << result << endl;

    return result;
}

int main(){
    cout<<endl;
    int num1;
    cout<<"Enter number to be doubled: ";
    cin>>num1  ;
    doubler(num1);
    // doubled value is returned to the screen as our output answer
    cout << "Result in main func: " << num1 << endl;
    cout << "";

    cout<<endl;
return 0;
}