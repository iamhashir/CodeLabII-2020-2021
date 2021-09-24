#include <iostream>
using namespace std;

int main()
{
    cout << endl;

    int nums[5];
    cout << "Enter 5 nums: ";
    for (int &nu:nums)
    {
        cin >> nu;
    }
    for (int &nus : nums)
    {
        cout << endl
             << nus << endl;
    }


    cout << endl;
    return 0;
}