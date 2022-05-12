#include <iostream>
using namespace std;


class Dog
{
public:
    string name;
    string colour;
    int age;
    double weight;

    void Woof()
    {
        cout << "Woof Woof! " << name << endl;
    }
    void print_Characteristics(){
        cout<<"1.) Tony is: "<<age<<" Years old \n2.) His weight is "<< weight <<" Kg's"; 
    }
};
int main()
{
    Dog Tony;
    Tony.name = "Tony";
    Tony.colour = "White";
    Tony.weight = 24.6;
    Tony.age = 10;

    Tony.Woof();
    Tony.print_Characteristics();

    return 0;
}