#include <iostream>
using namespace std;
int main()
{
    int n;            // To take input
    int table[10][3]; // Table
    cout << "Input a number: ";
    cin >> n;
    // Generating Output
    for (int i = 0; i < 10; i++)
    {
        table[i][0] = i + 1;
        table[i][1] = n;
        table[i][2] = table[i][0] * table[i][1];
    }

    for (int i = 0; i < 10; i++)
    {
        cout << table[i][0] << " * " << table[i][1] << " = " << table[i][2] << endl;
    }
    return 0;
}