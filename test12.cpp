#include<iostream>
#include<string>
using namespace std;
int main()
{
    //Structures
    struct{
        int myNum;
        float myFloat;
        string myString;
    }myStructure;
    myStructure.myNum = 34;
    myStructure.myFloat = 96.2324;
    myStructure.myString = "Hello";

    cout << myStructure.myNum << "\n";
    cout << myStructure.myFloat << "\n";
    cout << myStructure.myString << "\n";
    cout << "\n";

    //One structure in multiple variable
    struct{
        string brand;
        string model;
        string origin;
        int year;
    }myCar1, myCar2, myCar3, myCar4;

    myCar1.brand = "BMW";
    myCar1.model = "X7";
    myCar1.origin = "Germany";
    myCar1.year = 2019;

    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.origin = "USA";
    myCar2.year = 2020;

    myCar3.brand = "Toyota";
    myCar3.model = "Land Cruiser";
    myCar3.origin = "Japan";
    myCar3.year = 2022;

    myCar4.brand = "Land Rover";
    myCar4.model = "Range Rover";
    myCar4.origin = "UK";
    myCar4.year = 2022;

    cout << myCar1.brand << " - " << myCar1.model << " - " << myCar1.origin << " - " << myCar1.year << "\n";
    cout << myCar2.brand << " - " << myCar2.model << " - " << myCar2.origin << " - " << myCar2.year << "\n";
    cout << myCar3.brand << " - " << myCar3.model << " - " << myCar3.origin << " - " << myCar3.year << "\n";
    cout << myCar4.brand << " - " << myCar4.model << " - " << myCar4.origin << " - " << myCar4.year << "\n";

    //C++ reference
    cout << "\n" << "References:" << "\n";
    string food = "Pizza";
    string &meal = food;
    cout << food << "\n";
    cout << meal << "\n";
    cout << &meal << "\n";
    cout << &food << "\n";

    //C++ Pointers
    cout << "\n" << "Pointers:" << "\n";
    string* ptr = &food;
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";

    //Modify pointers
    cout << "\n";
    cout << food << "\n";
    cout << &food << "\n";
    cout << ptr << "\n";
    *ptr = "burger";
    cout << *ptr << "\n";
    cout << food << "\n";
    return 0;
}
