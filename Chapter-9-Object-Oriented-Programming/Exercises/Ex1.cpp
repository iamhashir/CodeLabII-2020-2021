#include <iostream>
using namespace std;

class Dog
{
public:
// class is made which consist of multiple attributes
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
    // dog is now called through its attributes to perform functions
    Tony.Woof();
    Tony.print_Characteristics();
    return 0;
}