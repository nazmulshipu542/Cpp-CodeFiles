#include<iostream>
#include<string>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z);
};

Car::Car(string x, string y, int z)
{
    brand = x;
    model = y;
    year = z;
};

int main()
{
    Car obj1("BMW", "X5", 1999);
    Car obj2("Mercedes-Benz", "C-class", 2001);
    cout << obj1.brand << " " << obj1.model << " " << obj1.year << "\n";
    cout << obj2.brand << " " << obj2.model << " " << obj2.year << "\n";
    return 0;
};
