#include<stdio.h>
int main()
{
	int rollno,i;
	char name[50];
	int marks[5];
	int total=0;
	printf("Enter the rollno: ");
	scanf("%d",&rollno);
	printf("Enter student name: ");
	scanf(" %[^\n]",name);
	for(i=0;i<5;i++)
	{
		printf("Enter the marks in subject %d:",i+1);
		scanf("%d",&marks[i]);
		total+=marks[i];
	}
	printf("student details:\n");
	printf("Rollno:%d\n",rollno);
	printf("Name:%d\n",name);
	printf("marks:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",marks[i]);
	}
	printf("total:%d\n",total);
}
