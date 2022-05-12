#include <iostream>
using namespace std;

class Employee
{
    string name;
    int age;
    int id;
    float salary;

    public:

    void setData()
    {
        string name;
        int age;
        int id;
        float salary;

        cout<<"Enter name of your Employee: ";
        cin>>name;
        cout<<"Enter age of your Employee: ";
        cin>>age;
        cout<<"Enter id of your Employee: ";
        cin>>id;
        cout<<"Enter salary of your Employee: ";
        cin>>salary;
        cout<<endl;

        this->name = name;
        this->age = age;
        this->id = id;
        this->salary = salary;
    }
    void getData(){
        cout<<"1) The name of employee is: "<<name<<endl<<"2) His age is "<<age<<endl<<"3) The id of "<<name<<" is: "<<id<<endl<<"4) The salary of "<<name<<" iS: "<<salary;
    }
 
};

int main()
{
    cout << endl;
    cout << "";

    Employee batch[4];

    cout << endl;
    batch[0].setData();
    batch[0].getData();
    cout << endl;
    batch[1].setData();
    batch[1].getData();
    cout << endl;
    batch[2].setData();
    batch[2].getData();
    cout << endl;

    cout << endl;
    return 0;
}