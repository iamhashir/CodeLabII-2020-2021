#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
using namespace std;
string ReadNthLine(const string &filename, int N)
{
    ifstream in(filename.c_str());
    string s;
    // for performance
    s.reserve(3);
    // skip N lines
    for (int i = 0; i < N; ++i)
        getline(in, s);
    getline(in, s);
    return s;
}
int main()
{
    cout << endl;
    cout << "";
    string var = " ";
    ifstream file("petrolPump.txt");
    string num[20];
    stringstream geek;
     for (int i = 0; !file.eof(); i++)
    {
        getline(file, num[i]);
        stringstream geek(num[i]);  
    }
   int x = 0;
    geek >> x;
    cout << x << endl;
    return 0;
}