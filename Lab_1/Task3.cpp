//Task 3
//WAP in CPP to find the area of circle and rectangle using the concept
// of function overloading.

#include<iostream>

using namespace std;

void area(int r)
{
    cout<<"The area of circle is: "<<3.14*r*r<<endl;
}
void area(int l,int b)
{
    cout<<"The area of rectangle is: "<<l*b<<endl;
}

int main()
{
    area(55);
    area(16,20);
    return 0;
}
