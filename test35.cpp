#include<iostream>
#include<string>
using namespace std;

class Father
{
    public:
        void FatherGenome()
        {
            cout << "Genome of Father" << "\n";
        };
};

class Mother
{
    public:
        void MotherGenome()
    {
        cout << "Genome of Mother" << "\n";
    };
};

class Child: public Mother , public Father
{

};

int main()
{
    Child SecondGeneration;
    SecondGeneration.FatherGenome();
    SecondGeneration.MotherGenome();
    return 0;
}
