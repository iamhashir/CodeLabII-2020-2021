#include <iostream>
using namespace std;


int main(){
    cout<<endl;
    cout<< "" ;

    int i , num;
    float nums[100];

    cout<<"Enter the Total amount of values you would like to enter: ";
    cin>>num;
    cout<<endl;

for ( i = 0; i < num; i++)
{
    cout<<"Enter value"<< i+1<<"): ";    
    cin>>nums[i];
}

int largest = 0;
int *largestp = &largest;

for ( i = 1; i < num; i++)
{
    if (largest<nums[i])
    {
        largest= nums[i];
        /* code */
    }
    
}
cout<<endl<<"Largest element is = "<<*largestp;
    cout<<endl;
return 0;
}












