//find position of minimum value in array
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5],i,min_pos;
	printf("\nEnter the array \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	min_pos=0;
	for(i=0;i<5;i++)
	{
		if(a[i]<a[min_pos])
		{
			min_pos=i;
		}
	}
	printf("\nMinimum value in array is %d and minimum value position in array is %d",a[min_pos],min_pos);
	return 0;
}