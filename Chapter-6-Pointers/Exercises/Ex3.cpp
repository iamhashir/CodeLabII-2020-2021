#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    int num = 5;
    string word = "hash";
    int *nump = &num;
    
    // memories are getting allocated here
    string *wordp = &word;
    cout << nump;
    cout << endl;
    cout << *nump;
    *nump = 12;
    cout << endl;
    cout << *nump;
    cout << endl;

    cout << endl;
    return 0;
}