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
	
	printf("\nEnter the number where you want to restart loop ");
	scanf("%d",&b);
	for(i=0;i<=number;i++)
	{
		if(i==b)
		{
			continue;
		}
		printf("\n%d",i);
	}
	return 0;	
}