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

int main()
{
    stEmployee Employee;

    ReadEmployee(Employee);
    PrintEmployee(Employee);

    return 0;
}
