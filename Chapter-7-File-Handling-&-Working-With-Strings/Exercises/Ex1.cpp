#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    // ifstream is used to get out content in the file
    ofstream outF("bio.txt");
    outF << "Hashir" << endl
         << 19 << endl
         << "Abu dhabi";
    // ifstream is used to get content inside the file
    ifstream inF("bio.txt");
    if (inF.is_open())
    {
        string data;
        while (!inF.eof())
        {
            getline(inF, data);
            cout << data << endl;
        }
        inF.close();
    }
    cout << endl;
    return 0;
}