#include <iostream>
using namespace std;
// structred named film is created to use multiple attributes
struct Film
{
    string Title;
    string Director;
    string Type;
    int estimateDuration;

} thriller[4];
int main()
{
    cout << endl;
    cout << "";
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << endl; //all input is taken fromt he user
        cout << "##########################  " << i << "  ##########################" << endl;
        cout << "Enter the Title of the movie: ";
        cin >> thriller[i].Title;
        cout << "Enter the Director of the movie: ";
        cin >> thriller[i].Director;
        cout << "Enter the Type of the movie: ";
        cin >> thriller[i].Type;
        cout << "Enter the Duration of the movie: ";
        cin >> thriller[i].estimateDuration;
    }
    cout << endl; //A for loop is used to output the data inside structures
    for (int i = 0; i < 4; i++)
    {
        cout << "1) The title of the Film is: " << thriller[i].Title << endl
             << "2) The director of the Film is: " << thriller[i].Director << endl
             << "3) The Type of Film is: " << thriller[i].Type << endl
             << "4) The estimateDuration of Film is: " << thriller[i].estimateDuration;
        cout << endl;
        cout << endl;
    }
    cout << endl;
    return 0;
}