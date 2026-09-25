#include <iostream>
using namespace std;

struct stFullName
{
    string FirstName;
    string LastName;
};

void ReadFullName(stFullName& Name)
{
    cout << "Please enter your FirstName?\n";
    cin >> Name.FirstName;

    cout << "Please enter your LastName?\n";
    cin >> Name.LastName;
}

void PrintFullName(stFullName Name)
{
    cout << "FirstName: " << Name.FirstName << endl;
    cout << "LastName: " << Name.LastName << endl;
}

struct stEmployee
{
    int Id;
    stFullName Name;
    float Salary;
};

void ReadEmployee(stEmployee& Employee)
{
    cout << "Please enter your Id?\n";
    cin >> Employee.Id;

    ReadFullName(Employee.Name);

    cout << "Please enter your Salary?\n";
    cin >> Employee.Salary;
}

void PrintEmployee(stEmployee Employee)
{
    cout << "********************\n";

    cout << "ID: " << Employee.Id << endl;
    PrintFullName(Employee.Name);
    cout << "SALARY: " << Employee.Salary << endl;

    cout << "********************\n";
}

void ReadEmployees(stEmployee Employees[2])
{
    ReadEmployee(Employees[0]);
    ReadEmployee(Employees[1]);
}

void PrintEmployees(stEmployee Employees[2])
{
    PrintEmployee(Employees[0]);
    PrintEmployee(Employees[1]);
}

float CalculateTotalSalary(stEmployee Employees[2])
{
    return Employees[0].Salary + Employees[1].Salary;
}

int main()
{
    stEmployee Employees[2];

    ReadEmployees(Employees);
    PrintEmployees(Employees);

    cout << "Total Salary: " << CalculateTotalSalary(Employees) << endl;

    return 0;
}
