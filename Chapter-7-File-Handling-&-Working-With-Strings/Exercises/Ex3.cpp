#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";

    ifstream inF("numbersA.txt");

    int fileReader[100];

    for (int i = 1; !inF.eof(); i++)
    {

        inF>>fileReader[i];
        cout << fileReader[i] << endl;
    }
    

    cout << endl;
    return 0;
}