#include<iostream>
#include<string>
using namespace std;

class myClass
{
    public:
        void myMethod()
        {
            cout << "Hello World" << "\n";
        }
};

int main()
{
    myClass myObj1;
    myObj1.myMethod();
    return 0;
}
