#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    int i, num;
    float nums[100];
    cout << "Enter the Total amount of values you would like to enter: ";
    cin >> num;
    cout << endl;
    // loop is created to take as many values input as the user want
    for (i = 0; i < num; i++)
    {
        cout << "Enter value" << i + 1 << "): ";
        cin >> nums[i];
    }
    int largest = 0;
    // a pointer is created to get the largest value entered by user
    int *largestp = &largest;

    for (i = 1; i < num; i++)
    {
        if (largest < nums[i])
        {
            largest = nums[i];
        }
        // largest number is being stored
    }
    cout << endl << "Largest element is = " << *largestp;
    cout << endl;
    return 0;
}
