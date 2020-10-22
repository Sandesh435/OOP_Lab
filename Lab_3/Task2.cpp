//Task 2
// Write a program in CPP to overload unary ++ for postfix and prefix increment
// operation on complex numbers using non-member/friend function.


#include<iostream>

using namespace std;

class complex
{
    float real,imag;
public:
    complex()
    {
        real=0;
        imag=0;
    }
    complex(float r, float i)
    {
        real=r;
        imag=i;
    }
    void showdata()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
    friend complex operator ++(complex &);
    friend complex operator ++(complex &,int);
};

complex operator ++(complex &c)
{
    complex temp;
    temp.real=++c.real;
    temp.imag=++c.imag;
    return temp;
}
complex operator ++(complex &c,int)
{
    complex temp;
    temp.real=c.real++;
    temp.imag=c.imag++;
    return temp;
}

int main()
{
    complex c1(3.1,1.3),c2(5.3,3.5),c3;
    c2=++c1;
    c1=c3++;
    c3=++c1;
    cout<<"After Using Unary Operators:\n";
    c1.showdata();
    c2.showdata();
    c3.showdata();
    return 0;
}

