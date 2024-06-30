// Write a program that can convert the Distance (meter, centimeter) to meters measurement in float and vice versa. Make a class distance with two data members, meter and centimeter. You can add function members as per your requirement.

#include <iostream>
using namespace std;

class Distance
{
private:
    int meter;
    int centimeter;

public:
    Distance(int m = 0, int cm = 0)
    {
        meter=m;
        centimeter=cm;
    }  // Constructor overloading
    Distance(float m)
    {
        meter = m;
        centimeter = (m - meter)*100;
    }
    operator float()
    { // We know explicitly it will return float as it is a conversion operator
        return meter + centimeter/100.0f;
    }
    void display()
    {
        cout << "Distance = " << meter << "m " << centimeter << "cm " << endl;
    }
};

int main()
{
    Distance d1(8, 35);
    d1.display();
    float m = 72.37f;
    Distance d2(m);
    cout<<"Converted to Float: "<<float(d1)<<endl;
    cout<<"---------------------------------------"<<endl;
    cout<<"Distance in meters = "<<m<<endl;
    cout<<"Converted to (m,cm): ";
    d2.display();
    return 0;
}
