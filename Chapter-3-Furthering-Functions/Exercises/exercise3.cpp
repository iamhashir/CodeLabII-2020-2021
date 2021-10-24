#include <iostream>
using namespace std;

void doubler(int &result)
{
    result = result + result;
    cout<<"Result in function by reference: "<<result<<endl;
}

int main()
{
    cout << endl;
    int num1;
    cout << "Enter number to be doubled: ";
    cin >> num1;
    doubler(num1);
    cout << "Result in main func: " << num1 << endl;
    cout << "";

    cout << endl;
    return 0;
}