/*
   concept
*/
#include <iostream>
using namespace std;
/*
Member access specifiers: private, public and protected
- private members of a class are accessible only from within other members
  of the same class (or from their "friends").
- public members are accessible from anywhere the object is visible.
- protected members are accessible from their "friends",
  as well as from members of their derived classes.
*/

class Celsius
{
    // By default, all members of a class declared with the class keyword
    // have private access for all its members
  private:  // Private members
    float tempc;

public:
    float toFahrenheit(float ctemp)
    {

        tempc= 9 * ctemp / 5.0 + 32;
        return tempc;
    }


};


class Fahrenheit
{
private: // Specifying private is optional
    float tempf;


public:
    float toCelsius(float ftemp) // Member function declaration
    {
     tempf= 5 * (ftemp - 32) / 9.0;
     return tempf;
    }

};



int main()
{
    Celsius c;
    Fahrenheit f;
    cout << " degree Celsius = " << c.toFahrenheit(0) << " degree Fahrenheit" << endl;
    cout << " degree Fahrenheit = " << f.toCelsius(212) << " degree Celsius" << endl;

    return 0;
}
