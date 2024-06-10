#include<iostream>
using namespace std;

class sum
{
private:
int num1,num2;
public:
sum(int a,int b )
{
    num1=a;
    num2=b;
}
void setdata(int inc)
{
    num1+=inc;
    num2+=inc;
}

void showdata() const
{
    int sum=num1+num2;
    cout<<"The sum is "<<sum<<endl;
}
};

int main()
{
    sum s1(4,5);           //non_constant object
     const sum s2(7,8);    //constant object
    s1.setdata(5);         //non_const_object.non_const_function
    s1.showdata();         //non_const_object.const_function
    s2.setdata(3);         //const_object.non_const_function
    s2.showdata();         //const_object.const_function
    
    return 0;
}
