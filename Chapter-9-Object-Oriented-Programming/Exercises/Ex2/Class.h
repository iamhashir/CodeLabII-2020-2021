#include <iostream>
using namespace std;

class Animal
{
public:
    string Type;
    string Name;
    string Colour;
    int Age;
    float Weight;
    string Noise;

    Animal(string n, string c, int a, float w);

    void sayHello();
    void makeNoise();
    void animalDetails();
    // constructor
    Animal();
    // destructor
    ~Animal();
};