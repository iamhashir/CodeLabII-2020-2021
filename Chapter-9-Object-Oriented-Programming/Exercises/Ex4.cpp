#include <iostream>
using namespace std;

class Data
{
private:
    int num1;
    int num2;
public:
    Data()
    {
        cout << "Enter num1: ";
        cin >> num1;
        cout << "Enter num2: ";
        cin >> num2;
        cout << num1 + num2;
    }
};

int main()
{
    cout << endl;
    cout << "";

    Data Sum;
    cout << endl;
    return 0;
}