// Task 2
// Write a program in CPP to input the name, roll, marks and address of n students from the user and
// display the entered details using the concept of class and objects.

#include<iostream>
using namespace std;

class student
{
	char Name[10];
	char Address[15];
	int Roll, Marks, n;
	public:
		void getdata()
		{
			cout << "Enter the numbers of student:";
			cin >> n;
			cout << "Enter name roll marks add:" <<endl;
			for (int i=0; i<n; i++)
			{
				cin>>Name>>Roll>>Marks>>Address ;
			}
		}
		void showdata()
		{
		
			cout << "The details of students: " <<endl;
				for (int i=0; i<n; i++)
				{
					cout <<Name <<"\t" <<Roll <<"\t" <<Marks <<"\t" << Address << endl ;
				}
		}
};
int main()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}
