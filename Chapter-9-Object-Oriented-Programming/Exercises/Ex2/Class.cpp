#include "Class.h"
#include <iostream>

Animal::Animal()
{
    cout << "An Animal has been created! \n";
}
Animal::~Animal()
{

    cout << "An Animal has been Deleted! \n";
}
Animal::Animal(string n, string c, int a, float w)
{
    Name = n;
    Colour = c;
    Age = a;
    Weight = w;
}
void Animal::sayHello()
{
    cout << "\nI am a " << Type << " And my name is " << Name << " ";
}
void Animal::makeNoise()
{
    cout << Noise;
}
void Animal::animalDetails()
{
    cout << "\n\n1) MY colour is " << Colour << "\n2) I am of " << Age << " years old\n3) My weight is " << Weight << "\n";
}