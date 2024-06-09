#include <iostream>
#include <cmath>
using namespace std;
class Prime
{
private:
    int flag = 1;

public:
    void isPrime(int num)
    {
        for (int i = 2; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (num <= 1)
        {
            flag = 0;
        }

        if (flag == 1)
        {
            cout << num << " is a prime number" << endl;
        }
        else
        {
            cout << num << " is not a prime number" << endl;
            flag = 1;
        }
    }
};
int main()
{
    Prime p;
    char option;
    int n;
    do
    {
        cout << "Enter any number:";
        cin >> n;
        p.isPrime(n);
        cout << "Do you want to continue entering numbers?(y/n):";
        cin >> option;
    } while (option != 'n' && option != 'N');
    return 0;
}
