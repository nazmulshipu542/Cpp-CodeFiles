#include<iostream>
#include<string>
using namespace std;

int sumFunction(int x, int y)
{
    return x + y;
}
int main()
{
    int z = sumFunction(5 , 6);
    cout << "z = " << z << "\n";
    return 0;
}
