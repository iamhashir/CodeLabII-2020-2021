#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";

    // data inside the file is getting loaded
    ifstream inF("numbersA.txt");

    int fileReader[100];
    // data inside the file is getting loaded and printed on the console
    for (int i = 1; !inF.eof(); i++)
    {

        inF >> fileReader[i];
        cout << fileReader[i] << endl;
    }

    cout << endl;
    return 0;
}