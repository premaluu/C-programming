/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b,c;
	printf("Enter any three number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("%d is greater",a);
	}
	if(b>a && b>c)
	{
		printf("%d is greater",b);
	}
	if(c>a && c>b)
	{
		printf("%d is greater",c);
	}
	if(a==b && a==c)
	{
		printf("All are equal");
	}
	return 0;
}