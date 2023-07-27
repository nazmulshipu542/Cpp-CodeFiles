#include<iostream>
#include<string>
using namespace std;

void countryFunction(string country = "USA")
{
    cout << country << "\n";
}
int main()
{
    countryFunction("China");
    countryFunction("Russia");
    countryFunction();
    return 0;
}
