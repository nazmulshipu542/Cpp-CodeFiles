#include<iostream>
#include<string>
using namespace std;
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int arrayLength = sizeof(numbers)/sizeof(int);
    cout << arrayLength << "\n";
    cout << "\n";

    string cArs[10]= {"Honda", "Toyota", "Tesla"};
    cArs[3]= "Meserati";
    cArs[4]= "Honqqui";
    cout << "Lists:" << "\n";
    for(int j=0; j<10; j++){
        cout << j << ":" << cArs[j] << "\n";
    }
    cout <<"\n";

    string cars[4] = {"Volvo" , "BMW" , "Ford" , "Audi"};
    for(int i=0; i<4; i++){
        cout << cars[i] << "\n";
    }
    cout << "\n";

    //Multi dimention array
    string letters[2][4] = {
        {
            "A", "B", "C", "D"
        },
        {
          "E", "F", "G", "H"
        }
    };
    cout << letters[0][2] << "\n";
    letters[0][0]="Z";
    cout << letters[0][0] << "\n";

    cout << "\n";

    //Loop through multi-dimension array
    for(int row=0; row<2; row++){
        for(int column=0; column<4; column++){
            cout << letters[row][column] << "\n";
        }
    }
    return 0;
}
