#include<iostream>
#include<string>
using namespace std;

void myFunction(string name = "Refnes" , int age = 30)
{
    cout << name << " " << age << "\n";
}
int main()
{
    myFunction("Jenny" , 22);
    myFunction("Liam" , 21);
    myFunction("Anja" , 28);
    myFunction();
    return 0;
}
