/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int marks;
	int maths,science,history;
	printf("Enter the marks of three subject");
	printf("\nMaths:- ");
	scanf("%d",&maths);
	printf("\nscience :- ");
	scanf("%d",&science);
	printf("\nHistory :- ");
	scanf("%d",&history);
	if(maths>100 || science>100 || history>100)
	{
		printf("Enter the marks below 100");
	}
	else
	{
		marks = maths+science+history;
		printf("Your total marks is :- %d",marks);
		if(marks>=250 && marks<=300)
		{
			printf("\nYour grade is A");
		}
		else if(marks>=170 && marks<=250)
		{
			printf("\nYour grade is B");
		}
		else if(marks>=100 && marks<=170)
		{
			printf("\nYour grade is C");
		}
		else
		{
			printf("\nYour grade is D");
		}
	}
	return 0;

}