#include <iostream>
#include <tuple>
#include <utility>
using namespace std;

int main()
{
    cout << endl;
    cout << "";
    
// pair is assigned here
    pair<string, int> football;
// tuple is assigned here
    tuple<string, double, int> temp;

    temp = make_tuple("Abu dhabi", 20.1, 3);
    
    football.first = "Liverpool";
    football.second = 3;
    cout << "The name of the city is: "<<get<0>(temp)<<endl<<"The temperature is: " << get<1>(temp)<<endl<<"The wind speed is: "<<get<2>(temp);
    cout << endl;
    cout << endl;
    cout<<"The name of football team is: "<<football.first<<endl;
    cout<<"The Leaque position of football team is: "<<football.second<<endl;
    cout << endl;
    return 0;
}