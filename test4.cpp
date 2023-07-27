#include<iostream>
using namespace std;
int main()
{
    int a=40, b=20;
    int addition=a+b, substraction=a-b, multiplication=a*b, division=a/b, moduls=a%b, increment=++a, decrement=--a;
    cout << "a = 40 , b = 20" << "\n";
    cout << "Addition: " << addition << "\n";
    cout << "Substraction: " << substraction << "\n";
    cout << "Multiplication: " << multiplication << "\n";
    cout << "Division: " << division << "\n";
    cout << "Modulus: " << moduls << "\n";
    cout << "Increment: " << increment << "\n";
    cout << "Decrement: " << decrement << "\n";

    //Assignment operators
    int x = 54242;
    cout << "Assignment Operators" << "\n";
    cout << "x = 54242" << "\n";
    cout << "x = " << x << "\n";
    x+=5;
    cout << x << "\n";
    x-=5;
    cout << x << "\n";
    x*=5;
    cout << x << "\n";
    x/=5;
    cout << x << "\n";
    x%=5;
    cout << x << "\n";
    x|=5;
    cout << x << "\n";
    x^=5;
    cout << x << "\n";
    x>>=5;
    cout << x << "\n";
    x<<=5;
    cout << x << "\n";

    //Comparison operator
    int h = 100 , m = 34;
    cout << "Comparison Operators" << "\n";
    cout << "h = 100 , m = 34" << "\n";
    cout << (h==m) << "\n";
    cout << (h!=m) << "\n";
    cout << (h>m) << "\n";
    cout << (h<m) << "\n";
    cout << (h>m) << "\n";
    cout << (h>=m) << "\n";
    cout << (h<=m) << "\n";

    // Logical Operator
    int v = 5 , q = 4;
    cout << "Logical Operators" << "\n";
    cout << "v = 5 , q = 4" << "\n";
    cout << (v<100 && q>2) << "\n";
    cout << (v<3 || q<2) << "\n";
    cout << !(v<=5 && q>=4) << "\n";
    return 0;
}
