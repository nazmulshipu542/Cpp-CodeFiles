#include<iostream>
#include<string>
using namespace std;

int swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}
int main()
{
    int firstNum = 10;
    int secondNum = 20;
    cout << "Before swap: " << firstNum << " , " << secondNum << "\n";
    swapNums(firstNum , secondNum);
    cout << "After swap: " << firstNum << ", " << secondNum << "\n";
    return 0;
}
