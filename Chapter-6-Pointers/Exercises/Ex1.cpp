#include <iostream>
using namespace std;

int main()
{
    int num;
    // nump is pointer pointing towards num is memory address
    int *nump = &num;

    cin >> num;
    // the values are prnted here
    cout << "\t" << num << "\t" << &num << "\t" << *nump;

    cout << endl;
    cout << "";

    cout << endl;
    return 0;
}