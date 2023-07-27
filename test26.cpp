#include<iostream>
#include<string>
using namespace std;

class myClass
{
    public:
        void myMethod();
};

void myClass::myMethod()
{
    cout << "Hello World!" << "\n";
};

int main()
{
    myClass myObj2;
    myObj2.myMethod();
    return 0;
}
