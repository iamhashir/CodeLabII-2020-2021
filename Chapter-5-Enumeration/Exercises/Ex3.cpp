#include <iostream>
using namespace std;

int main()
{
    cout << endl;
    cout << "";

    enum Direction
    {
        Sunday=1,
        Monday,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday
    };
    // weekend day is get from the user
    cout<<"Enter a weekend number from 1~~7: ";
    cout<<endl;
    int input;
    cin >> input;
    // after getting input enum object is initialised
    Direction direction ;
    cout<<endl;
// switch statement is used to switch between inputs to get specific results
    switch (input)
    {
    case Sunday:
        cout << "Opening hours on Sunday is: \t11am\nClosing hours on Sunday is \t10pm";
        break;
    case Monday:
        cout << "Opening hours on Monday is: \t11am\nClosing hours on Monday is \t10pm";
        break;
    case Tuesday:
        cout << "Opening hours on Tuesday is: \t11am\nClosing hours on Tuesday is \t10pm";
    case Wednesday:
        break;
        cout << "Opening hours on Wednesday is: \t11am\nClosing hours on Wednesday is \t10pm";
        break;
    case Thursday:
        cout << "Opening hours on Thursday is: \t11am\nClosing hours on Thursday is \t11:30pm";
        break;
    case Friday:
        cout << "Opening hours on Friday is: \t11am\nClosing hours on Friday is \t11:30pm";
    case Saturday:
        break;
        cout << "Opening hours on Saturday is: \t11am\nClosing hours on Saturday is \t11:30pm";
        break;

    default:
        cout << "Direction can be either North or South";
    }

    cout << endl;
    return 0;
}
