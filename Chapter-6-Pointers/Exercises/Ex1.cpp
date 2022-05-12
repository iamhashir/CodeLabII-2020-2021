#include <iostream>
using namespace std;


int main(){
    int num;
    int *nump=&num;
    
    cin>>num;

    cout << "\t" << num << "\t" << &num << "\t"<<*nump;

    cout<<endl;
    cout<< "" ;

    cout<<endl;
return 0;
}