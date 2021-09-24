#include <iostream>
using namespace std;


int main(){
    cout<<endl;
    
    string num[5][5]={"-----","-0-0-","-@@@-","-+++-","-vvv-"};

    for (int i = 0; i < 5; i++)
    {
        
        for (int j = 0; j < 5; j++)
        {
            cout<<num[i][j]<<"\t";;
        }
    }
    
    cout<<endl;
return 0;
}