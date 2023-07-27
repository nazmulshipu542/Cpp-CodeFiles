#include<iostream>
#include<string>
using namespace std;

class myClass
{
    public:
        myClass()
        {
            cout << "hello world" << "\n";
        }
};

int main()
{
    myClass myObj;
    return 0;
}
