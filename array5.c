//find index of largest element in array
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,max_pos=0;
	printf("\nEnter the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		if(a[i]>a[max_pos])
		{
			max_pos=i;
		}
	}
	printf("\nYour array is :- ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nMaximum element in array position is %d and value is %d",max_pos,a[max_pos]);
	return 0;
}