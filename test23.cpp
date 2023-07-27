#include<iostream>
using namespace std;

class myClass
{
    public:
        int myNum;
        string myString;
};

int main()
{
    myClass myObj;
    myObj.myNum = 14;
    myObj.myString = "this is a test!";
    cout << "Num: " << myObj.myNum << "\n";
    cout << "String: " << myObj.myString << "\n";
    return 0;
}
