#include<iostream>
using namespace std;

class vech
{
    private:
    int num_vehicle,hour,rate;
    public:
    vech(int no,int hr, int r)
    {
        num_vehicle=no;
    hour=hr;
    rate=r;
    }

vech(vech &v3)
    {
        num_vehicle = v3.num_vehicle;
        hour = v3.hour;
        rate = v3.rate;

        cout << "Copy constructor called" << endl;
    }

   void display()
    {
        
         int totalCharge;
            int total =hour*rate;
            if(num_vehicle>10)
        {
         totalCharge =0.9*total;
        }
        else{
            totalCharge=total;
        }
        
    cout<<"the total charge is: "<<totalCharge;
}};

int main()
{
    vech v1(5,6,7);
    vech v2(v1);
    v2.display();
    return 0;
}
