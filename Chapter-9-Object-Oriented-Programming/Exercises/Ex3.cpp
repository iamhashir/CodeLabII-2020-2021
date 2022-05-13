#include <iostream>
using namespace std;

class Students
{
public:
    string Name;
    int Mark1;
    int Mark2;
    int Mark3;
    float calcGrade()
    {
        return ((Mark1 + Mark2 + Mark3) / 2);
    };
    void display()
    {
        cout << " The student's name is: " << Name <<endl << "The average marks are: " << calcGrade() << endl;
    };
};
int main()
{
    Students Hashir;
    cout<<"Enter student name: ";
    cin>>Hashir.Name;
    cout<<"Enter student marks1: ";
    cin>>Hashir.Mark1;
    cout<<"Enter student marks2: ";
    cin>>Hashir.Mark2;
    cout<<"Enter student marks3: ";
    cin>>Hashir.Mark3;
    Hashir.calcGrade();
    Hashir.display();
}