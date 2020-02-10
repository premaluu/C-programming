/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5]={10,20,30,40,50};//delaration with initialization
	int b[]={10,20,30,40,50};//declaration with initialization
	int i;
	printf("\nArray a is ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);
	}
	printf("\nArray b is ");
	for(i=0;i<5;i++)
	{
		printf("\n%d",b[i]);
	}
	return 0;
}