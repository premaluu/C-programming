//exchange maximum and minimum element in array
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],min_pos=0,max_pos=0,i,temp=0;
	printf("\nEnter the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min_pos=0;
	max_pos=0;
	for(i=0;i<5;i++)
	{
		if(a[i]>a[max_pos])
		{
			max_pos=i;
		}
		if(a[i]<a[min_pos])
		{
			min_pos=i;
		}
	}
	printf("\nBefore exchange");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
		if(i==max_pos)
		{
			printf(" Maximum");
		}
		if(i==min_pos)
		{
			printf(" Minimum");
		}
	}
	temp=a[min_pos];
	a[min_pos]=a[max_pos];
	a[max_pos]=temp;
	for(i=0;i<5;i++)
	{
		if(a[i]>a[max_pos])
		{
			max_pos=i;
		}
		if(a[i]<a[min_pos])
		{
			min_pos=i;
		}
	}
	printf("\n\nAfter exchange");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
		if(i==max_pos)
		{
			printf(" Maximum");
		}
		if(i==min_pos)
		{
			printf(" Minimum");
		}
	}
	return 0;
}