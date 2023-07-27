#include<iostream>
#include<string>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
};

int main()
{
    Car Obj1;
    Obj1.brand = "BMW";
    Obj1.model = "x7";
    Obj1.year = 2019;

    Car Obj2;
    Obj2.brand = "Ford";
    Obj2.model = "Mustang";
    Obj2.year = 2023;

    cout << Obj1.brand << "-" << Obj1.model << "-" << Obj1.year << "\n";
    cout << Obj2.brand << "-" << Obj2.model << "-" << Obj2.year << "\n";
    return 0;
}
