#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void menu()
{
    string input;
    // cin >> input;

    if (input == "Coffe")
    {
        cout << "you have selected coffee your menu is: ";
    }
    if (input == "Tea")
    {
        cout << "you have selected Tea your menu is: ";
    }

    int Ice_Coffee = 3;
    int Ice_Tea = 3;
    int Milk_Coffee = 2;
    int Milk_Tea = 2;
    int Black_Coffee = 1;
    int Black_Tea = 1;

    cout << endl
         << setw(15) << " 0 -> Ice_Coffee ->    " << Ice_Coffee << " DHS " << setw(50) << setfill(' ') << " 1 -> Ice_Tea    " << Ice_Tea << " DHS " << endl
         << endl;

    cout << endl
         << setfill(' ') << setw(15) << " 2 -> Milk_Coffee  " << Milk_Coffee << " DHS " << setw(44) << setfill(' ') << " 3 -> Milk_Tea     " << Milk_Tea << " DHS " << endl
         << endl;
    cout << endl
         << setfill(' ') << setw(15) << " 4 -> Black_Coffee    " << Black_Coffee << " DHS " << setw(37) << setfill(' ') << " 5 -> Black_Tea   " << Black_Tea << " DHS " << endl
         << endl;
    cout << endl
         << endl
         << "" << setfill('-') << setw(50) << " END " << setw(50) << setfill('-') << ""
         << endl;
}

int main()
{
    menu();
}