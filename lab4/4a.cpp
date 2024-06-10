#include <iostream>
using namespace std;

class Time
{
private:
    int hour,minute,second;
 public:
    Time()
    {
        hour=0;
        minute=0;
        second=0;
    }

    Time(int hr,int min,int sec)
    {
    hour=hr;
    minute=min;
    second=sec;
    }

 Time addTime(Time t1)
    {
        Time temp;
        int tsec = second + t1.second;
        int tmin;
        temp.second = (tsec) % 60;
        tmin = minute + t1.minute;
        temp.minute = (tmin + tsec / 60) % 60;
        temp.hour = hour + t1.hour + (tmin + tsec / 60) / 60;
        return temp;
    }
    void display12hr()
    {
        int hr = (hour % 12) == 0 ? 12 : hour % 12;
        cout << "The time in 12 hour format is " << hr << ":" << minute << ":" << second<<endl;
    }
    void display24hr()
    {
        int hr = (hour % 24) == 0 ? 24 : hour % 24;
        cout << "The time in 24 hour format is " << hr << ":" << minute << ":" << second;
    }

 
};




int main()
{
Time t1(12,15,36);
Time t2(7,34,35);
Time t3;
t3=t2.addTime(t1);
t3.display12hr();
t3.display24hr();

    return 0;
}
