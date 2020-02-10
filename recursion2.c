//fibonacci seris using recursion
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>
int fib(int n);

int main()
{
	int number,fibonacci;
	printf("\nEnter the number from where you have to print fibonacci seris ");
	scanf("%d",&number);
	fibonacci=fib(number);
	printf("\n%d",fibonacci);
	return 0;
}

int fib(int n)
{
	if(n==0)
	{
		return 0;
	}
	else if(n==1)
	{
		return 1;
	}
	else
	{
		return fib(n-1)+fib(n-2);
	}
}