#include<iostream>
//#include<string>
using namespace std;
int main()
{

    //Three dimensional array
    string letters[2][2][2]={
    {
        {
            "A", "B"
        },
        {
            "C", "D"
        }
    },
    {
        {
            "E", "F"
        },
        {
            "G", "H"
        }
    }
    };
    for(int i=0; i<0; i++){
        for(int j=0; j<0; j++){
            for(int k=0; k<0; k++){
                cout << letters[i][j][k] << "\n";
            }
        }
    }

    return 0;
}
