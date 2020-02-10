//find average of array elements
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,sum=0,avg;
	printf("\nEnter the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	avg=sum/5;
	printf("\nAverage of all element in array is %d",avg);
	return 0;
}