// .  Write two classes to store distances in meter-centimeter and feet-inch systems respectively.
// Write conversions functions so that the program can convert objects of both types.

#include <iostream>
using namespace std;
class British; // Forward Declaration

class Metric
{
private:
    int meters;
    int centimeters;

public:
    Metric(int m = 0, int cm = 0) : meters(m), centimeters(cm){};
    Metric operator=(British); // Forward Declaration for operator overloading function
    int getM() const
    {
        return meters;
    }
    int getcm() const
    {
        return centimeters;
    }
};

class British
{
private:
    int feet;
    int inch;

public:
    British(int ft = 0, int in = 0) : feet(ft), inch(in){};
    British operator=(Metric);
    int getft() const
    {
        return feet;
    }
    int getinch() const
    {
        return inch;
    }
};

Metric Metric::operator=(British d)
{
    float ft = d.getft() + d.getinch() / 12.0f;
    meters = ft * 0.3048;
    centimeters = (ft * 0.3048 - meters) * 100;
}

British British::operator=(Metric d)
{
    float m = d.getM() + d.getcm() / 100.0f;
    feet = m * 3.28;
    inch = (m * 3.28 - feet) * 12;
}

int main()
{
    Metric d1(5, 52), d3;
    British d2(3, 5), d4;

    d3 = d2;
    d4 = d1;

    cout << "From m,cm to ft,inch : "<< d1.getM() << " m " << d1.getcm() << " cm = " << d4.getft() << " ft " << d4.getinch() << " in" << endl;
    cout << "From ft,inch to m,cm : "<< d2.getft() << " ft " << d2.getinch() << " inch = " << d3.getM() << " m " << d3.getcm() << " cm" << endl;

    return 0;
}
