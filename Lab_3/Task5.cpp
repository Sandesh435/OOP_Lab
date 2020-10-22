// Task 5
// Write a program in CPP to find the product of two 3 by 3 matrices entered by
// the user by overloading binary * operator.


#include<iostream>
 using namespace std;

 class matrices
 {
     int MAT[3][3];
 public:
    void getdata()
    {
        cout<<"Enter the matrix:\n";
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>MAT[i][j];
    }
    matrices operator *(matrices &m)
    {
        matrices temp;
        int sum=0;
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<3;k++)
                {
                    sum += MAT[i][k]*m.MAT[k][j];
                }
                temp.MAT[i][j]=sum;
                sum=0;
            }
        }
        return temp;
    }
    void showdata()
    {
        cout<<"The result is:\n";
        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
                cout<<MAT[i][j]<<"\t";
            cout<<endl;
        }
    }
 };

 int main()
 {
     matrices m1,m2,m3;
     m1.getdata();
     m2.getdata();
     m3=m1*m2;
     m3.showdata();
 }
