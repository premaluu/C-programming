/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int maths,science,history,marks;
	
	printf("\nEnter the marks of three subject");
	printf("\nMaths :- ");
	scanf("%d",&maths);
	printf("\nScience :- ");
	scanf("%d",&science);
	printf("\nHistory :- ");
	scanf("%d",&history);
	
	marks=maths+science+history;
	switch(((marks*100)/300)/10)
	{
		case 10:
		case 9:
			printf("\nYour grade is A");
			break;
		case 8:
		case 7:
			printf("\nYour grade is B");
			break;
		case 6:
		case 5:
			printf("\nYour grade is C");
			break;
		case 4:
		case 3:
			printf("\nYour grade is D");
			break;
		default:
			printf("\nEnter valid marks");
			break;
	}
	return 0;
}