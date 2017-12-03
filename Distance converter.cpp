#include<iostream>
using namespace std;

class Distance
{
    public:
        int feet,inches;
        Distance()
        {
            feet = 0;
            inches = 0;
        }
        Distance(int a,int b)
        {
            feet = a;
            inches = b;
        }
        Distance operator+(Distance d);
        void Display()
        {
            cout<<feet<<" feet "<<inches<<" inches"<<endl;
        }
};

Distance Distance :: operator+(Distance d)
{
    Distance temp;
    temp.feet = feet + d.feet;
    temp.inches = inches + d.inches;
    if(temp.inches>=12)
    {
        temp.feet = temp.feet + temp.inches/12;
        temp.inches = temp.inches%12;
    }
    return temp;
}

int main()
 {
    Distance d1(12,12),d2(1,9),d3;
    cout<<"Distance d1 = ";
    d1.Display();
    cout<<"Distance d2 = ";
    d2.Display();
    d3=d1+d2;
    cout<<"Distance d3 = ";
    d3.Display();
}

