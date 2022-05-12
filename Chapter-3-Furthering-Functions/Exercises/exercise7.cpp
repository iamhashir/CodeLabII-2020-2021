// #include <iostream>
// #include <string>
// using namespace std;

// string solution(int answer){
//     cout<<"has";
//     return "jash";
// }

// int main(){
//     cout<<endl;
//     string question;
//     cout<<"Q. \n";
//     cin>>question;


//     cout<<endl;
// return 0;
// }





#include <iostream>
#include <time.h>

using namespace std;


string solution(string question){

    // cout<<endl;
    // string question;
    // cout<<"Q. ";
    cin>>question;

    string arr[5] = {"it is a great day" , "work hard to perform good" , "code looks awesome" , "it is nice to get stuck"};

    srand(time(NULL));

    int random = rand() % 5;

    cout<<arr[random];

}

int main(){
    cout<<endl;
    cout<< "" ;
    cout << endl;
    string question;
    cout << "Q. ";

    solution(question);
    cout<<endl;
return 0;
}




















