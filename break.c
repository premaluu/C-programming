/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	int i;
	int b;
	
	printf("\nEnter the number ");
	scanf("%d",&number);
	printf("\nEnter the number where you want to break the loop ");
	scanf("%d",&b);
	
	for(i=0;i<=number;i++)
	{
		printf("\n%d",i);
		if(i==b)
		{
			break;
		}
	}
	printf("\nOutside loop counter is :- %d",i);
	return 0;
}