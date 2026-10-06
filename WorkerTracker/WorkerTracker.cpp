#include <iostream>
#include <string>

using namespace std;

struct stTenDays
{
    short Days;
    short Hours;
};

void ReadTenDays(stTenDays& TenDays)
{
    cout << "Please enter Days?\n";
    cin >> TenDays.Days;

    cout << "Please enter Hours?\n";
    cin >> TenDays.Hours;
}

void PrintTenDays(stTenDays TenDays)
{
    cout << "Days: " << TenDays.Days << endl;
    cout << "Hours: " << TenDays.Hours << endl;
}

struct stEmployeeWork
{
    string FullName;
    short DailyWage;
    stTenDays TensDays[3];
};

void ReadEmployeeWork(stEmployeeWork& EmployeeWork)
{
    cout << "Please enter the FullName?\n";
    getline(cin, EmployeeWork.FullName);

    cout << "Please enter the daily wage?\n";
    cin >> EmployeeWork.DailyWage;

    cout << "----- ten 1 -----\n";
    ReadTenDays(EmployeeWork.TensDays[0]);

    cout << "----- ten 2 -----\n";
    ReadTenDays(EmployeeWork.TensDays[1]);

    cout << "----- ten 3 -----\n";
    ReadTenDays(EmployeeWork.TensDays[2]);
    cin.ignore(1, '\n');
}

short MonthlyDaysWork(stEmployeeWork EmployeeWork)
{
    return EmployeeWork.TensDays[0].Days + EmployeeWork.TensDays[1].Days + EmployeeWork.TensDays[2].Days;
}

short MonthlyHoursWork(stEmployeeWork EmployeeWork)
{
    return EmployeeWork.TensDays[0].Hours + EmployeeWork.TensDays[1].Hours + EmployeeWork.TensDays[2].Hours;
}

double MonthlySalary(stEmployeeWork EmployeeWork)
{
    return EmployeeWork.DailyWage * MonthlyDaysWork(EmployeeWork) + double(MonthlyHoursWork(EmployeeWork)) / 8 * EmployeeWork.DailyWage;
}

void PrintTotalEmployeeSalaryAndWorks(stEmployeeWork EmployeeWork)
{
    cout << "Total Days: " << MonthlyDaysWork(EmployeeWork) << endl;
    cout << "Total Hours: " << MonthlyHoursWork(EmployeeWork) << endl;
    cout << "Total Salary: " << MonthlySalary(EmployeeWork) << endl;
}

void PrintEmployeeWork(stEmployeeWork EmployeeWork)
{
    cout << "FullName: " << EmployeeWork.FullName << endl;
    cout << "Daily Wage: $" << EmployeeWork.DailyWage << endl;

    cout << "----- ten 1 -----\n";
    PrintTenDays(EmployeeWork.TensDays[0]);

    cout << "----- ten 2 -----\n";
    PrintTenDays(EmployeeWork.TensDays[1]);

    cout << "----- ten 3 -----\n";
    PrintTenDays(EmployeeWork.TensDays[2]);
}

void ReadEmployeesWork(stEmployeeWork EmployeesWork[3])
{
    cout << "------ Employee 1 ------\n" << endl;
    ReadEmployeeWork(EmployeesWork[0]);
    
    cout << "------ Employee 2 ------\n" << endl;
    ReadEmployeeWork(EmployeesWork[1]);

    cout << "------ Employee 3 ------\n" << endl;
    ReadEmployeeWork(EmployeesWork[2]);
}

short TotalMonthlyDaysWork(stEmployeeWork EmployeesWork[3])
{
    return MonthlyDaysWork(EmployeesWork[0]) + MonthlyDaysWork(EmployeesWork[1]) + MonthlyDaysWork(EmployeesWork[2]);
}

short TotalMonthlyHoursWork(stEmployeeWork EmployeesWork[3])
{
    return MonthlyHoursWork(EmployeesWork[0]) + MonthlyHoursWork(EmployeesWork[1]) + MonthlyHoursWork(EmployeesWork[2]);
}

double TotalMonthlySalary(stEmployeeWork EmployeesWork[3])
{
    return MonthlySalary(EmployeesWork[0]) + MonthlySalary(EmployeesWork[1]) + MonthlySalary(EmployeesWork[2]);
}

void PrintTotalEmployeesSalaryAndWorks(stEmployeeWork EmployeesWork[3])
{
    cout << "Total Days: " << TotalMonthlyDaysWork(EmployeesWork) << endl;
    cout << "Total Hours: " << TotalMonthlyHoursWork(EmployeesWork) << endl;
    cout << "Total Salary: " << TotalMonthlySalary(EmployeesWork) << endl;
}

void PrintEmployeesWork(stEmployeeWork EmployeesWork[3])
{
    cout << "------ Employee 1 ------\n" << endl;
    PrintEmployeeWork(EmployeesWork[0]);
    PrintTotalEmployeeSalaryAndWorks(EmployeesWork[0]);

    cout << "------ Employee 2 ------\n" << endl;
    PrintEmployeeWork(EmployeesWork[1]);
    PrintTotalEmployeeSalaryAndWorks(EmployeesWork[1]);

    cout << "------ Employee 3 ------\n" << endl;
    PrintEmployeeWork(EmployeesWork[2]);
    PrintTotalEmployeeSalaryAndWorks(EmployeesWork[2]);
}

int main()
{
    stEmployeeWork EmployeesWork[3];

    ReadEmployeesWork(EmployeesWork);
    PrintEmployeesWork(EmployeesWork);
    PrintTotalEmployeesSalaryAndWorks(EmployeesWork);
    //PrintTotalEmployeesSalaryAndWorks(EmployeesWork);

    return 0;
}
