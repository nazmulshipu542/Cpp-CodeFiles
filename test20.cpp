#include<iostream>
#include<string>
using namespace std;

int arrayFunction(int myNumbers[15])
{
    for(int i=0 ; i<10 ; i++){
        cout << myNumbers[i] << "\n";
    }
}
int main()
{
    int myNumbers[15] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80 , 90 , 100};
    arrayFunction(myNumbers);
    return 0;
}
