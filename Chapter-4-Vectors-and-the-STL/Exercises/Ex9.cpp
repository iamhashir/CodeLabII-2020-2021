#include <iostream>
#include <map>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    int studentId;
    // map is initialised so that the name of student appears by selceting id
    map<int, string> students{
        {1, "Hashir"},
        {2, "Ahmed"},
        {3, "Sohail"},
        {4, "Waleed"},
        {5, "sadi"}};

    cout << "Enter the student number: ";
    cin >> studentId;

    cout << students.at(studentId);
    
        if (studentId > 5)
        {
            cout <<"Error select the correct student id.";
            return 0;
        }
    cout << endl;
    return 0;
}