#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(){
    cout<<endl;
    cout<< "" ;
    ifstream inF("randomStrings.txt");
        int data1=0;
    if (inF.is_open())
    {
        string data;
        while (!inF.eof())
        {
            getline(inF, data);
            data1++;
        }
        inF.close();
    }
    cout<<data1<<endl;
return 0;
}