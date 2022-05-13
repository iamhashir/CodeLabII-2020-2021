#include <iostream>
#include <algorithm>
using namespace std;
int main()
{

    string word;

    cout << endl;
    cout << "Enter word to reverse: ";
    cin >> word;
    // native functions of stl library array is used reverse
    reverse(word.begin(), word.end());
    cout << endl;
    cout << word;
    cout << endl;
    return 0;
}