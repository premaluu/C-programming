//input array from user
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i;;
	printf("\nEnter the array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nYour array is :- ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}