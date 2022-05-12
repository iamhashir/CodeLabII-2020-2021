// #include <iostream>
// using namespace std;

// int main()
// {
//     enum Direction
//     {
//         North,
//         South
//     };
//     Direction direction = North;
//     switch (direction)
//     {
//     case North:
//         cout << "Direction is North";
//         break;
//     case South:
//         cout << "Direction is South";
//         break;
//     default:
//         cout << "Direction can be either North or South";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";

    enum Direction
    {
        Up,
        Down,
        Right,
        Left
    };

    char input;
    cin >> input;
        
    Direction direction = Up;
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
