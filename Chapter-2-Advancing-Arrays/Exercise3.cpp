#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    array<int, 7> array1 = {15, 2, 6, 11, 12, 13, 9};
    array<int, 7> array1;
    vector<int> array2;
     
    int largest = array1[0];

    int num1 = 0, num2;

    for (int i = 0; i < 7; i++)
    {
        if (array1[i] % 2 == 0)
        {
            // cout<<array1[i]<<endl;
            array2.push_back(array1[i]);
        }
    }
    largest = array2[0];
    for (int i = 0; i < array2.size(); i++)
    {
        if (array2[i] > largest)
        {
            largest = array2[i];
        }
    }

    cout << largest << " is a even number" << endl;
    cout << endl;
    return 0;
}
