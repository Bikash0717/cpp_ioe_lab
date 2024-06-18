#include <iostream>
using namespace std;

class Value
{
private:
    int val;

public:
    Value(int n) {
        val=n;
     }

    bool operator==(const Value &n)
    {
        return val == n.val;
    }

    bool operator<(const Value &n)
    {
        return val < n.val;
    }

    bool operator>(const Value &n)
    {
        return val > n.val;
    }

    bool operator!=(const Value &n)
    {
        return val != n.val;
    }

    bool operator<=(const Value &n)
    {
        return val <= n.val;
    }

    bool operator>=(const Value &n)
    {
        return val >= n.val;
    }
};

int main()
{
    Value num1(4), num2(3);

    cout << "num1 == num2 : " << ((num1 == num2) ? "True" : "False") << endl;
    cout << "num1 < num2  :" << ((num1 < num2) ? "True" : "False") << endl;
    cout << "num1 > num2  :" << ((num1 > num2) ? "True" : "False") << endl;
    cout << "num1 != num2 : " << ((num1 != num2) ? "True" : "False") <<endl;
    cout << "num1 <= num2 : " << ((num1 <= num2) ? "True" : "False") <<endl;
    cout << "num1 >= num2 : " << ((num1 >= num2) ? "True" : "False") <<endl;

    return 0;
}
