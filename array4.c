//find maximum element from array
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,max=0;
	printf("\nEnter the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("\nYour array is :- ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nMaximum element from array is :- %d",max);
	return 0;
}