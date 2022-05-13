#include <iostream>

using namespace std;
// seprate functions are defined over here which serves specific Arthematic purposes

int Add(int num1, int num2)
{
    return num1 + num2;
}
int Subtract(int num1, int num2)
{
    return num1 - num2;
}
// in these functions the numbers are taken as parameters from the main functions passed by the user
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
// seprate function is created to complete a purpose of displaying menu over screen
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
// c++ goto statment is used to serve as a shorthand for looping the same thing if user answered yes
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
// c++ goto statment is used to serve as a shorthand for loop
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
