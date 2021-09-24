#include <iostream>
using namespace std;


int main(){
    cout<<endl;

    int nums[3];
    cout<<"Enter 3 nums: ";
    for (int i = 0; i < 3; i++)
    {
        cin>>nums[i];
    }
    cout <<endl<< "Your numbers forward: "<<endl;
        for (int i = 0; i < 3; i++)
    {
        cout<<endl<<nums[i]<<endl;
    }

    cout <<endl<< "Your numbers reversed: "<<endl;
        for (int i = 2; i > -1; i--)
    {
        cout<<endl<<nums[i]<<endl;;
    }
    
   
    cout<< "" ;

    cout<<endl;
return 0;
}