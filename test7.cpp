//C++ Conditions
#include<iostream>
using namespace std;
int main()
{
    // if statement
    if(20>18){
        cout << "20 is greater than 18." << "\n";
    }
    //else if statement
    int x = 2323, y = 4767, z = 1313;
    if(x>y && x>z){
        cout << "X is greater than Y & Z." << "\n";
    }
    else if(y>x && y>z){
        cout << "Y is greater than X & Z." << "\n";
    }
    else if(z>x && z>x){
        cout << "Z is greater than X & Y." << "\n";
    }

    //Short hand else..if
    int temp = 25;
    string result = (temp<35) ? "It's a good day." : "It's a bad day.";
    cout << result << "\n";

    //Switch
    int day = 4;
    switch(day)
    {
    case 1:
        cout << "Monday." << "\n";
        break;
    case 2:
        cout << "Tuesday." << "\n";
        break;
    case 3:
        cout << "Wednesday." << "\n";
        break;
    case 4:
        cout << "Thursday." << "\n";
        break;
    case 5:
        cout << "Friday." << "\n";
        break;
    case 6:
        cout << "Saturday." << "\n";
        break;
    case 7:
        cout << "Sunday." << "\n";
        break;
    }

    //Switch with default
    int month = 9;
    switch (day)
    {
    case 2:
        cout << "It's February" << "\n";
        break;
    case 5:
        cout << "It's May." << "\n";
        break;
    default:
        cout << "I wonder which month it is!" << "\n";
    }

    //While Loop
    cout << "While Loop:" << "\n";
    int i = 3;
    while (i<10){
        cout << i << "\n";
        i++;
    }
    cout << "\n";
    //Do while loop
    cout << "Do While Loop:" << "\n";
    int j = 0;
    do{
        cout << j << "\n";
        j++;
    }
    while(j<5);

    //For loop
    cout << "For Loop:" << "\n";
    for(int k = 0; k<4; k++){
        cout << k << "\n";
    }

    cout << "\n";
    for(int l = 1; l<=10; l=l+2){
        cout << l << "\n";
    }

    //Break
    cout << "Break:" << "\n";
    for(int a=0; a<=10; a++){
        if(a==5){
            break;
        }
        cout << a << "\n";
    }
    cout << "\n";

    //continue
    cout << "Continue:" << "\n";
    for(int b=1; b<8; b++){
        if(b==3){
            continue;
        }
        cout << b << "\n";
    }
    return 0;
}
