#include <iostream>
using namespace std;


class Shape {

    double height;
    double width;

    double area_Calc(){
        return height * width;
    }
};
class Circle : public Shape {

    double area_calc(){
        return width * length;
    }

};


int main(){
    cout<<endl;
    cout<< "" ;

    cout<<endl;
return 0;
}