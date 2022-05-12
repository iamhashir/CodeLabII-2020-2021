#include <iostream>
using namespace std;
// int Ice_Coffee = 3;
// int Ice_Tea = 3;
// int Milk_Coffee = 2;
// int Milk_Tea = 2;
// int Black_Coffee = 1;
// int Black_Tea = 1;
#include <array>
int main()
{
    char input;
    int num[6] = {3, 3, 2, 2, 1, 1};
    int pros[6];

    for (int i = 0; i < 6; i++)
    {
        cin >> input;
        if (input == 'Y')
        {
            break;
        }
        switch (input)
        {
        case /* constant-expression */
            /* code */
            break;

        default:
            break;
        }
        if (input == 0)
        {
            pros[0] = num[0];
        }
        if (input == 1)
        {
            pros[1] = num[1];
        }
        if (input == 2)
        {
            pros[2] = num[2];
        }
        if (input == 0)
        {
            pros[3] = num[3];
        }
    }

    cout << endl;
    return 0;
}