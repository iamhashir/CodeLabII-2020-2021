#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    
    // an array is created pf 5 values
    int num[5];
    
    // values of array is assigned through for loop
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter num " << i + 1 << " : ";
        cin >> num[i];
    }
    cout << endl;

    // values of array are shown to the screen using for loop
    {
    for (int i = 0; i < 5; i++)

        cout << "Num " << i + 1 << " is = " << num[i] << "\t";
    }

    cout << "";

    cout << endl;
    return 0;
}