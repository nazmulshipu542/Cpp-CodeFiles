#include<iostream>
#include<string>
using namespace std;
class Employee
{
    protected:
        int Salary;
};
class Accountant: public Employee
{
    int bonus;
    void setSalary(int s)
    {
        salary = s;
    }
    int getSalary()
    {
        return salary;
    }
};
int main()
{
    Accountant obj;
    obj.setSalary(50000);
    obj.bonus(15000);
    cout << Salary = << obj.setSalary << "\n";
    cout << Bonus = << obj.bonus << "\n";
}
