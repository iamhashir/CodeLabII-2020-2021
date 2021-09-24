#include <iostream>
using namespace std;


int main(){
    cout<<endl;
    char alpha;
    
    cout<< "Enter a character to test: " ;
    cin>>alpha;

    if (alpha >= 'a' && alpha <= 'z' || alpha >= 'A' && alpha <= 'Z')
    {
        cout<<"It is an alphabect";
    }
    else{

        cout<<"It is not a alphabect";
    }


    cout<<endl;
return 0;
}