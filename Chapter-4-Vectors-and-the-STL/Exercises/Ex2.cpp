#include <iostream>
#include <vector>

#include <algorithm>
using namespace std;

int print_vector(vector<int> values, int range)
{
    for (int i = 0; i < range; i++)
    {
        cout << values[i] << endl;
    }
}

int main()
{
    // Part 1
    cout << endl;
    cout << "";

    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "The values of vector are: \n\n";

    // Part 2

    print_vector(values, values.size());

    // part 3

    cout << "\n Highest number is: " << *max_element(values.begin(), values.end()) << endl;
    cout << "\n Lowest number is: " << *min_element(values.begin(), values.end()) << endl;

    // PART 4

    values.resize(20);

    // PART 5

    cout << "The new values of vector length 20 are: \n\n";

    print_vector(values, 20);

    for (int i = 10; i < 20; i++)
    {

        values[i] = i + 1;
    }

    cout << "The new assigned values of vector length 20 are: \n\n";

    print_vector(values, values.size());
    values.push_back(12);
    values.push_back(24);
    cout << "\n\npushed back elements are: ";

    print_vector(values, values.size());

    values.pop_back();
    values.pop_back();
    cout << "Values after poping out: ";
    print_vector(values, values.size());

    cout << endl;
    cout << values[0];
    cout << endl;
    cout << values[19];

    values.clear();

    cout << "\nValues after clearing out: ";

    cout<<values.size();

    cout<<values.empty();

    return 0;
}