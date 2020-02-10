//find minimum from array
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,min=0;
	printf("\nEnter the array ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nMinimum value in array is :- %d",min);
	return 0;
}