#include <iostream>
using namespace std;

int Add(int num1, int num2)
{
    return num1 + num2;
}
int Subtract(int num1, int num2)
{
    return num1 - num2;
}
int Multiply(int num1, int num2)
{
    return num1 * num2;
}
int Divide(int num1, int num2)
{
    return num1 / num2;
}
int Modulus(int num1, int num2)
{
    return num1 % num2;
}
void menu()
{
    cout << "\n1): Add\n";
    cout << "2): Subtract\n";
    cout << "3): Multiply\n";
    cout << "4): Divide\n";
    cout << "5): Modulus\n";
}
int main()
{
    cout << endl;
    cout << "";
    int operation, num1, num2;
loop:
    menu();

    cout << "\nSelect a operation to calculate(1~~5): ";
    cin >> operation;

    cout << "\nEnter two numbers for calculation: \n";
    cin >> num1 >> num2;

    switch (operation)
    {
    case 1:
        cout << "******The result of "
             << "Addition is " << Add(num1, num2)<<endl<<endl;
        break;
    case 2:
        cout << "******The result of "
             << "Subtraction is " << Subtract(num1, num2)<<endl<<endl;
        break;
    case 3:
        cout << "******The result of "
             << "Multiplication is " << Multiply(num1, num2)<<endl<<endl;
        break;
    case 4:
        cout << "******The result of "
             << "Division is " << Divide(num1, num2)<<endl<<endl;
        break;
    case 5:
        cout << "******The result of "
             << "Modulus is " << Modulus(num1, num2)<<endl<<endl;
        break;
    default:
        break;
    }

    char loop;

    cout << "Do you want to calculate again: ";
    cin >> loop;

    if (loop == 'Y' || loop == 'y')
    {
        goto loop;
    }
    if (loop == 'N' || loop == 'n')
    {
        cout<<"\nThanks for using this calculator\n";
        return 0;
    }

    cout << endl;
    return 0;
}
