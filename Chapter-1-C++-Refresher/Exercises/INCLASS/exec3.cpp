#include <iostream>
#include <array>

#include <time.h>
using namespace std;

int main()
{
    cout << endl;
    int arr[1000];

    srand(time(NULL));
    for (int &num : arr)
    {
        num = rand() % 100 + 1;
    }
    array<int, 100> secondArray;
    for (int &nums : arr)
    {
        if (nums == 6)
        {
            nums = 1;
        }
    }
    int result;
for (int i = 0; i < 100; i++)
{
    result = secondArray[i].size();
    /* code */
}

cout<<result;

    cout << endl;
    return 0;
}