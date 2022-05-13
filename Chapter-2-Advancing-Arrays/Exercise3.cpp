#include <iostream>
#include <array>
#include <vector>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    array<int, 7> array1 = {9, 2, 6, 11, 12, 6, 4};
    vector<int> array2;
    int largest = array1[0];
    int num1 = 0, num2;
    // even number ic calculated using modulus operator and pushed back in the vector
    for (int i = 0; i < 7; i++)
    {
        if (array1[i] % 2 == 0)
        {
            array2.push_back(array1[i]);
        }
    }
    largest = array2[0];
    // loop is used to check th largest number in the array
    for (int i = 0; i < array2.size(); i++)
    {
        if (array2[i] > largest)
        {
            largest = array2[i];
        }
    }

    cout << largest << " is a largest even number" << endl;
    cout << endl;
    return 0;
}
