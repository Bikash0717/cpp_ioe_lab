#include<iostream>
using namespace std;

class depart
{
private :
string did;
string dname;

public:
depart(string depart_id,string depart_name)
{
    did=depart_id;
    dname=depart_name;

}

void display()
{
    cout<<"The department id is "<<did<<"\n The department name is "<<dname<<endl;
}
~depart()
{
    cout<<"Object goes out of the scope..Department object destroyed!";
}
};

int main()
{
    depart d1("079bct031","Computer Engineering");
    d1.display();
    return 0;
}
