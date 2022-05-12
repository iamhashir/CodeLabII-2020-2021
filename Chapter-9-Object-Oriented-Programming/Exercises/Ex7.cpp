#include <iostream>
using namespace std;

class Animal
{
protected:
    string Type;
    string Name ;
    int age;

public:
    void eat()
    {
        cout << "NOM! NOM!";
    }
};

class Cat: public Animal{
    string noise = " MEOW! ";
    public:
        void meow(){
            Name="kitty";
            cout<<"Meow! My name is "<<Name;
        }
};

int main()
{
    cout << endl;
    cout << "";
    Cat kitty;

    kitty.meow();

    cout << endl;
    return 0;
}
