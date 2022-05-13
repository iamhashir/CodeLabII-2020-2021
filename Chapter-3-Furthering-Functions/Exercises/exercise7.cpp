#include <iostream>
// included time.h to use srand 
#include <time.h>
using namespace std;
string solution(string question){

// an input is taken from the user which looks like a guess made by computer
    cin>>question;
    string arr[5] = {"it is a great day" , "work hard to perform good" , "code looks awesome" , "it is nice to get stuck"};

// seedign to pick a random string from the array

    srand(time(NULL));
    int random = rand() % 5;

// a random string is printed to the console when something is typed by the user
    cout<<arr[random];
}

int main(){
    cout<<endl;
    cout<< "" ;
    cout << endl;
    string question;
    cout << "Q. ";
    // solution function is called and question is passed as a copy parameter where other   proceedings are done
    solution(question);
    cout<<endl;
return 0;
}




















