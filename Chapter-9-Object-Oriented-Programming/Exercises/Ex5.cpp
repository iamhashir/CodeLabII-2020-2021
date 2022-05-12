#include <iostream>
using namespace std;

class Dog
{

public:
    string name;
    Dog(string name)
    {
        this->name = name;
    }
};
int main()
{
    Dog Rhodies("Tony");
    cout<<Rhodies.name;
    return 0;
}