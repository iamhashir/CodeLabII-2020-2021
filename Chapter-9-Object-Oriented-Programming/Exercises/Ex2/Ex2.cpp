#include <iostream>
#include "Class.cpp"
using namespace std;
int main()
{
    cout << endl;
// classes declaration are seprated into other files
    Animal Dog("Rodhes", "light brown", 9, 22.6);
    Animal Cat;
    Dog.Type = "Mammal";
    Dog.Name = "Tony";
    Dog.Noise = "Woof! Woof!";
    Dog.Age = 9;
    Dog.Weight = 22.6;

    Cat.Type = "Carnivorous";
    Cat.Name = "Kitty";
    Cat.Colour = "Off White";
    Cat.Noise = "Meow! Meow!";
    Cat.Age = 15;
    Cat.Weight = 4.1;
    // different animal names and attributes are getting assigned
    cout << "\n##################################################\n";
    Cat.sayHello();
    Cat.makeNoise();
    Cat.animalDetails();
    cout << "\n##################################################\n";
    Dog.sayHello();
    Dog.makeNoise();
    Dog.animalDetails();
    cout << "\n##################################################\n";
    cout << endl;
    return 0;
}