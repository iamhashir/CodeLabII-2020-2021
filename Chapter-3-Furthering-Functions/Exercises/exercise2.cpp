#include <iostream>
using namespace std;

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
    cout << "Result in main func: " << num1 << endl;
    cout << "";

    cout<<endl;
return 0;
}