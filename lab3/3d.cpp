#include <iostream>
#include <cmath>
using namespace std;
class Circle
{
private:
    float _radius;
    const float PI = 3.14159;

public:


    float getArea()
    {
        return PI * _radius * _radius;
    }

    float getPerimeter()
    {
        return 2 * PI * _radius;
    }

    float setRadius(float r)
    {

    _radius=r;
    return _radius;
    }
};

class Rectangle
{
private:
    float length, breadth;

public:


    float getArea()
    {
        return length * breadth;
    }

    float getPerimeter()
    {
        return 2 * (length + breadth);
    }

    float setlb(float l,float b)
    {
        length=l;
         breadth=b;
        return length,breadth;
    }


};

class Triangle
{
private:
    float a, b, c;
public:
    float getArea()
    {
        float s = getPerimeter() / 2.0f;
        return sqrt(fabs(s * (s - a) * (s - b) * (s - c)));
    }
    float getPerimeter()
    {
        return a + b + c;
    }
    void setSide(float x, float y, float z)
    {
        a = x;
        b = y;
        c = z;
    }

};

int main()
{
    Circle c;
    Rectangle rec;
    Triangle t;
    int r,len,br,x,y,z;
    cout << "Enter the radius of circle:"<<endl;
    cin>>r;
    c.setRadius(r);
    cout << "Area: " << c.getArea() << endl;
    cout << "Perimeter: " << c.getPerimeter() << endl;

    cout << "Enter the length and breadth of rectangle:"<<endl;
    cin>>len>>br;
    rec.setlb(len,br);
    cout << "Area: " << rec.getArea() << endl;
    cout << "Perimeter: " << rec.getPerimeter() << endl;

    cout << "Enter the sides of triangle:"<<endl;
    cin>>x>>y>>z;
    t.setSide(x,y,z);

    cout << "Area: " << t.getArea() << endl;
    cout << "Perimeter: " << t.getPerimeter() << endl;

    return 0;
}
