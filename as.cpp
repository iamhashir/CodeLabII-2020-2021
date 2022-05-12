#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

int main()
{

    ifstream myFile;
    vector<string> ass;
    myFile.open("sampleTweets.csv");
    for (int i = 1; myFile.good(); i++)
    {
        string line;
        getline(myFile, line);
        ass.push_back(line);
        // cout<<line;
        // cout<<"asa";
        if (line==.find(','))
        {
            line=
        }
        
    }
    int num;

    while (!cin.fail())
    {
        cout<<endl;
        cin >> num;
        cout << ass[num];
        cout<<endl;
    }

    // cout << "asadsd";

    return 0;
}