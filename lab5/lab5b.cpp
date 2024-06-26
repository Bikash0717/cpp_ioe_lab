#include <iostream>
using namespace std;
class Coordinate
{
private:
    float x, y, z;

public:
    Coordinate(float a, float b, float c)
    {
        x=a;
        y=b;
        z=c;
    }

    void display()
    {
        cout << "(" << x << ", " << y << ", " << z << ")";
    }


    friend Coordinate operator+(const Coordinate &c1,const Coordinate &c2)
    {

        return Coordinate(c1.x + c2.x, c1.y + c2.y, c1.z + c2.z);
    }
};

int main()
{
    Coordinate c1(3, 7, 4), c2(7, 8, 9);

    Coordinate c3 = c1 + c2;

    c3.display();

    return 0;
}
