#include <iostream>
using namespace std;
class Employee
{
private:
    int eid, tbonus, tovertime, tyear;

public:
    void setPara(int id, int bonus, int overtime, int year)
    {
        eid = id;
        tbonus = bonus;
        tovertime = overtime;
        tyear = year;
    }

    bool displayReport(int e_id)
    {
        if (eid == e_id)
        {
            cout << "\nAn employee with employee id " << eid << " has received Rs." << tbonus
                      << " as a bonus and had worked " << tovertime << " hours as overtime in the year " << tyear << endl;

            return true;
        }

        // Employee id not found
        return false;
    }
};

int main()
{
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; ++i)
    {
        cout << "\nEnter the data for employee " << i + 1 << endl;

        int employee_id, bonus, overtime, year;

        cout << "Employee id: ";
        cin >> employee_id;

        cout << "Total bonus: ";
        cin >> bonus;

        cout << "Total overtime: ";
        cin >> overtime;

        cout << "Enter the year: ";
        cin >> year;

        employees[i].setPara(employee_id, bonus, overtime, year);
    }

    int empid;
    cout << "\nEnter the employee id to search: ";
    cin >> empid;

    // for-of loop for looping through the employees
    bool employee_found = false;

    for (int i = 0; i < n; ++i) {
        if (employees[i].displayReport(empid)) {
            employee_found = true;
            break;
        }
    }

    if (!employee_found)
    {
        cout << "\nEmployee not found!";
    }

    return 0;
}
