#include<iostream>
#include<string>
using namespace std;

class Employee
{
    private:
        int Salary;
    public:
        void setSalary(int s)
    {
        Salary = s;
    }
    int getSalary()
    {
        return Salary;
    }
};

int main()
{
    Employee obj1;
    obj1.setSalary(5000);
    cout << obj1.getSalary();
    return 0;
}
