#include <iostream>
using namespace std;

// now here the parameter is passed by reference
void doubler(int &result)
{
    // result is doubled by reference paramerter so it reflects everywhere in the code
    result = result + result;
    cout << "Result in function by reference: " << result << endl;
}

int main()
{
    cout << endl;
    int num1;
    cout << "Enter number to be doubled: ";
    cin >> num1;
    // now this number is doubled by its memory address the copy of parameter was not send
    doubler(num1);
    cout << "Result in main func: " << num1 << endl;
    cout << "";

    cout << endl;
    return 0;
}