//WAP in C to input the name, roll, marks and address of n students 
//entered by the user and display the entered details using the concept of structure.

#include<stdio.h>

struct Student{
	char Name[20]; 
	char Address[20];
	int Roll, Marks;
}; 
int main()
{
	struct Student s[50];
	int i, n;
	printf("Enter the number of students: ");
	scanf ("%d" , &n);
	
	for(i=0; i<n; i++)
	{
		printf("Enter Name: \n ");
		scanf("%s", s[i].Name);
		printf("Enter Address: \n");
		scanf("%s", s[i].Address);
		printf("Enter Roll: \n");
		scanf("%d", &s[i].Roll);
		printf("Enter Marks:\n");
		scanf("%d", &s[i].Marks);
		
	}
	printf("The details is\n");
	for ( i= 0; i<n; i++)
	{
		printf("%s\t%s\t%d\t%d\n", s[i].Name, s[i].Address, s[i].Roll, s[i].Marks);
	}
	return 0;
}
