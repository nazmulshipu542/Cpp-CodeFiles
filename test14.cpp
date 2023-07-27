#include<iostream>
#include<string>
using namespace std;

void nameFunction(string fname)
{
    cout << fname << " Refnes \n" << "\n";
}
int main()
{
    nameFunction("Jenny");
    nameFunction("Liam");
    nameFunction("Anja");
    return 0;
}
