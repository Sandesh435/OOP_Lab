//Task 3
// Write a program in CPP to find the sum of two complex numbers using the concept of 
//the overloading binary + operator using member function.


#include<iostream>

using namespace std;

class complex
{
    float real,imag;
public:
    void getdata()
    {
        cout<<"Enter a Complex Number:\n";
        cin>>real>>imag;
    }
    complex operator +(complex &c)
    {
        complex temp;
        temp.real=c.real+real;
        temp.imag=c.imag+imag;
        return temp;
    }
    void showdata()
    {
        cout<<real<<"+i"<<imag<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.getdata();
    c2.getdata();
    c3=c1+c2;
    cout<<"The sum is:\n";
    c3.showdata();
    return 0;
}

