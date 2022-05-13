#include <iostream>
using namespace std;

int calculateArray(int nums[], int size)
{
    int product = 1;
    // the values of array are now multiplied using a for loop
    for (int i = 0; i < size; i++)
    {
        product = product * nums[i];
    }
    // now the final result is returned backed to the main function
    return product;
}

int main()
{
    cout << endl;

    int nums[4] = {1, 2, 4, 5};
// an array is passed asa an argument in this function to proceed further in other function
    cout << "The multiplied array result is: "<<calculateArray(nums, 4);

    cout << endl;
    return 0;
}