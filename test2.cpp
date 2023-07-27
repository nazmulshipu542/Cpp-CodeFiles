#include<iostream>
using namespace std;
int main()
{
    int x,y,sum;
    cout << "Type a number: "; //Type and press enter
    cin >> x; //Get user input from keyboard
    cout << "Your number is: "<<x; //Display the input value
    cout << "\n";
    cout << "Type a number: ";
    cin >> x;
    cout << "Type another number: ";
    cin >> y;
    sum = x+y;
    cout <<"Sum is: "<<sum;
    return 0;
}
