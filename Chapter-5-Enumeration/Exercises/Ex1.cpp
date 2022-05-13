#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    // enum set of values is assigned here
    enum weapons
    {
        Fists,
        Knife,
        Sword,
        Gun
    };
    // enum weapens object is created named fist
    weapons fist = Fists;

    cout << endl;
    return 0;
}