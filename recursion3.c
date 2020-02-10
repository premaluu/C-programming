
/*
	created by premal upadhyay
*/#include<stdio.h>
#include<conio.h>
int fib(int n);

int main()
{
	int number,i;
	printf("\nEnter the limits from where you want to print fibonacci seris ");
	scanf("%d",&number);
	for(i=0;i<=number;i++)
	{
		printf("%d",fib(i));
	}
	return 0;
}

int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1||n==2)
	{
		return 1;
	}
	else
	{
		return(fib(n-1)+fib(n-2));
	}
}