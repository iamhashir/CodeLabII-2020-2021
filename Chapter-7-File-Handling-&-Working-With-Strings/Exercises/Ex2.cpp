#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main(){
    cout<<endl;
    cout<< "" ;
    ifstream inF("randomStrings.txt");
        int data1=0;
        // all the data inside the file is getting counted
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
    cout<<"the total lines are: "<<data1<<endl;
return 0;
}