#include<iostream>
#include<string>
using namespace std;
int main()
{
    string greeting = "Hello";
    cout << greeting << "\n";

    string firstName = "Jhon";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;
    cout << fullName << "\n";

    // string length
    string txt = "ABCD";
    cout << "Length of the string: " << txt.length() << "\n";

    // access string
    string myString = "Hello";
    cout << myString[0] << "\n";

    //changing specific character
    string otherString = "Hello";
    myString[0] = 'J';
    cout << myString << "\n";

    //user input strings
    string anotherName;
    cout << "Type your first name: " << anotherName;
    cin >> anotherName;
    cout << "Your name is: " << anotherName << "\n";
    return 0;
}
