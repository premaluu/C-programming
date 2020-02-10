/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int number,i,fact=1;
	printf("\nEnter the number ");
	scanf("%d",&number);
	if(number<=0)
	{
		printf("\nNumber is zero or nagative");
	}
	else
	{
		for(i=1;i<=number;i++)
		{
			fact=fact*i;
		}
	}
	printf("\n%d",fact);
	return 0;
}