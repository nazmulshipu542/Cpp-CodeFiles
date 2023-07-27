#include<iostream>
#include<string>
using namespace std;

class Car
{
    public:
        string brand;
        string model;
        int year;
        Car(string x, string y, int z)
        {
            brand = x;
            model = y;
            year = z;
        };
};

int main()
{
    Car Obj1("BMW", "X5", 1999);
    Car Obj2("Ford", "Mustang", 1969);
    cout << Obj1.brand << " " << Obj1.model << " " << Obj1.year << "\n";
    cout << Obj2.brand << " " << Obj2.model << " " << Obj2.year << "\n";
    return 0;
}
