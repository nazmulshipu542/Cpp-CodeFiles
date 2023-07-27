#include<iostream>
#include<string>
using namespace std;
int main()
{
    //C++ Arrays
    string cars[4] = {"Volvo" , "BMW" , "Ford" , "Mazda"};
    int myNum[3] = {10 , 20 , 30};

    //Accessing elements of array
    cout << cars[3] << "\n";
    cout << myNum[1] << "\n";

    //Changing an elements of array
    string collectedCars[4] = {"Volvo" , "BMW" , "Ford" , "Audi"};
    collectedCars[0] = "Mercedes";
    cout << collectedCars[0] << "\n";

    cout << "\n";
    //Loops through array
    for(int i=0; i<4; i++){
        cout << cars[i] << "\n";
    }
    cout << "\n";

    for(int i=0; i<=4; i++){
        cout << i << ": " << collectedCars[i] << "\n";
    }
    cout << "\n";

    //Omit array size
    string cArs[10]= {"Honda", "Toyota", "Tesla"};
    cArs[4]= "Meserati";
    cArs[5]= "Honqqui";
    for(int j=0; j<10; j++){
        cout << j << cArs[j] << "\n";
    }
    cout <<"\n";

    //Get array size
    int numbers[5] = {10, 20, 30, 40, 50};
    int arrayLength = sizeof(numbers)/sizeof(int);
    cout << arrayLength << "\n";

    cout << "\n";
    return 0;
}
