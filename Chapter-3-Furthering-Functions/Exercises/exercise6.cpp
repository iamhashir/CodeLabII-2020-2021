#include <iostream>
using namespace std;

int calculateArray(int nums[], int size)
{
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        /* code */
        product = product * nums[i];
    }
    return product;
}

int main()
{
    cout << endl;

    int nums[4] = {1, 2, 4, 5};

    cout << calculateArray(nums, 4);

    cout << endl;
    return 0;
}