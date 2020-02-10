/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	int i=1;
	printf("\nEnter the number ");
	scanf("%d",&number);
	a:
	printf("\n%d x %d = %d",number,i,number*i);
	i++;
	if(i<=10)
	{
		goto a;
	}
	return 0;
}