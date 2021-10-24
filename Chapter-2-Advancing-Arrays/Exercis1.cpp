#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Enter num " << i + 1 << " : ";
        cin >> num[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {

        cout << "Num " << i + 1 << " is = " << num[i] << "\t";
    }

    cout << "";

    cout << endl;
    return 0;
}