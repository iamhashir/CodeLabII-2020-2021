#include <iostream>
using namespace std;
int main()
{
    cout << endl;
    cout << "";
    // enum is created to assign values
    enum Direction
    {
        Up,
        Down,
        Right,
        Left
    };
    char input;
    cin >> input;        
    // object direction is created
    Direction direction = Up;
    
    // input by the user is checked in these if statements

    if (input == 'W' ||input == 'w')
    {
        direction = Up;
    }
    if (input == 'A' ||input == 'a')
    {
        direction = Left;
    }
    if (input == 'S' ||input == 's')
    {
        direction = Down;
    }
    if (input == 'D' ||input == 'd')
    {
        direction = Right;
    }
    // switch cases is used to mention the direction 
    switch (direction)
    {
    case Up:
        cout << "Direction is Up";
        break;
    case Down:
        cout << "Direction is Down";
        break;
    case Right:
        cout << "Direction is Right";
        break;
    case Left:
        cout << "Direction is Left";
        break;

    default:
        cout << "Direction can be either North or South";
    }

    cout << endl;
    return 0;
}
