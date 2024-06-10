#include <iostream>
using namespace std;
class Strings
{
private:
    char *array;

public:
    Strings()
    {
        array = new char[50];
    }
    Strings(char arr[20])
    {
        int i;
        array = new char[20];
        for (i = 0; arr[i] != '\0'; i++)
        {
            array[i] = arr[i];
        }
        array[i]='\0';
    }
    int length() 
    {
        int i = 0;
        while (array[i] != '\0')
        {
            i++;
        }
        return i;
    }
    Strings join(Strings &b)
    {
        int lA, lB, i, index;
        lA = length();
        lB = b.length();
        Strings temp;
        delete[] temp.array;
        temp.array = new char[lA + lB + 2];

        for (i = 0; array[i]!='\0'; i++)
        {
            temp.array[i] = array[i];
        }
        index = i;
        temp.array[index] = ' ';
        index++;
        for (int j = 0; j < lB; j++, index++)
        {
            temp.array[index] = b.array[j];
        }
        temp.array[index] = '\0';
        return temp;
    }
    void display() 
    {
        cout << "Concatenated string is: " << array;
    }
    ~Strings()
    {

        delete[] array;
    }
};
int main()
{
    char a[20] = "Engineers are";
    char b[20] = "Creatures of logic.";
    Strings s1(a), s2(b);
    Strings s3= s1.join(s2);
    s3.display();

    return 0;
}
