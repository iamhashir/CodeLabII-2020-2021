#include <iostream>
using namespace std;

void welcomeMessage(string msg);

int main(){
    cout<<endl;
    welcomeMessage("hello Code lab");
    welcomeMessage("C++ is a great language");
    welcomeMessage("I am familiar with most of the concepts of codeLab");

    cout<<endl;
return 0;
}
void welcomeMessage(string msg){
    cout<<msg<<endl;
}