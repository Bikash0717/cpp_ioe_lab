#include <iostream>
using namespace std;
class Complex
{
protected:
    float real, imaginary;

public:
    Complex(float r = 0, float i = 0)
    {
        real =r;
        imaginary =i;
    }

    void input()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display()
    {
        cout << '(' << real << ", " << imaginary << ")\n";
    }

    friend class Complex_;
    friend class Difference;
};

class Complex_ : public Complex
{
public:
    Complex_(float r = 0, float i = 0) : Complex(r, i) {}

    Complex_ operator+(const Complex &c)
    {
        return Complex_(real + c.real, imaginary + c.imaginary);
    }

    friend class Difference;
};

class Difference
{
public:
    Complex result(const Complex &c1, const Complex_ &c2)
    {
        return Complex(c1.real - c2.real, c1.imaginary - c2.imaginary);
    }
};

int main()
{
    Complex c1;
    Complex_ c2;
    c1.input();
    cout << '\n';
    c2.input();

    cout << '\n';
    Complex c3 = c2 + c1;
    c3.display();

    Difference d;
    c3 = d.result(c1, c2);
    c3.display();

    return 0;
}
