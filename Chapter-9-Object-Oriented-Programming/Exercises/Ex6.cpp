#include <iostream>
using namespace std;

class Student
{

    string name;
    int number;
    // Getter functions
public:
    void setName(string name)
    {
        this->name = name;
    }
    void setNumber(int number)
    {
        this->number = number;
    }

    // Setter funcitons

    string getName()
    {
        return name;
    }
    int getNumber()
    {
        return number;
    }
};

int main()
{
    cout << endl;
    cout << "";
    Student abc;

    abc.setName("SHH");
    cout << abc.getName();
    
    cout << endl;

    abc.setNumber(12);
    cout << abc.getNumber();

    cout << endl;
    return 0;
}