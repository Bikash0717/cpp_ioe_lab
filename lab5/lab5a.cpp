#include <iostream>
#include <iomanip>
using namespace std;
class Date
{
private:
    int year, month, day;

public:
    Date(int y, int m, int d)
    {
        year=y;
        month=m;
        day=d;
    }

    // Prefix increment
    Date operator++()
    {
        day++;

        if (
            // Month 1, 3, 5, 7, 8, 10, 12 has 31 days
            ((month == 1 || month == 3 || month == 5 || month == 7 ||
              month == 8 || month == 10 || month == 12) &&
             (day > 31)) ||

            // Month 4, 6, 9, 11 has 30 days
            ((month == 4 || month == 6 || month == 9 || month == 11) && (day > 30)) ||

            // Month 2 in leap year has 29 days
            (isLeapYear() && (month == 2 && day > 29)) ||

            // Month 2 in non-leap year has 28 days
            (!isLeapYear() && (month == 2 && day > 28)))
        {
            day = 1;
            month++;
        }

        if (month > 12)
        {
            month = 1;
            year++;
        }

        return *this;
    }

    // Postfix increment
    // int is just a dummy variable, the compiler uses the int argument to distinguish
    // between the prefix and postfix increment operators
    Date operator++(int)
    {
        Date temp(*this);
        ++*this;
        return temp;
    }

    bool isLeapYear()
    {
       return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
    }

    void display()
    {
        cout << year << "-"
                  << setfill('0') << setw(2) << month << "-"
                  << setfill('0') << setw(2) << day << '\n';
    }
};

int main()
{
    Date d1(2023, 02, 28);
    d1.display();

    // First assign d1 to d2 and then increase d1
    Date d2 = d1++;
    d2.display();
    d1.display();

    // Assign the increased value to d1
    d1 = ++d1;
    d1.display();

    return 0;
}
