#include <iostream>
using namespace std;

struct stDate
{
    short Day;
    short Month;
    short Year;
};

void ReadDate(stDate& Date)
{
    cout << "Please enter the Day?\n";
    cin >> Date.Day;

    cout << "Please enter the Month?\n";
    cin >> Date.Month;

    cout << "Please enter the Year?\n";
    cin >> Date.Year;
}

void PrintDate(stDate Date)
{
    cout << Date.Day << "-" << Date.Month << "-" << Date.Year << endl;
}

struct stAddress
{
    string City;
    string Street;
};

void ReadAddress(stAddress& Address)
{
    cout << "Please enter the City?\n";
    cin >> Address.City;

    cout << "Please enter the Street?\n";
    cin >> Address.Street;
}

void PrintAddress(stAddress Address)
{
    cout << Address.Street << ", " << Address.City << "." << endl;
}

struct stStudent
{
    int Id;
    stDate BirthDate;
    stAddress HomeAddress;
};

void ReadStudent(stStudent& Student)
{
    cout << "Please enter the Id?\n";
    cin >> Student.Id;

    ReadDate(Student.BirthDate);
    ReadAddress(Student.HomeAddress);
}

void PrintStudent(stStudent& Student)
{
    cout << "ID: " << Student.Id << endl;

    PrintDate(Student.BirthDate);
    PrintAddress(Student.HomeAddress);
}

int main()
{
    stStudent Student;

    ReadStudent(Student);
    PrintStudent(Student);

    return 0;
}
