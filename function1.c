//function without argument and without return type
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

void sum();//Declaration

int main()
{
	sum();//calling
	return 0;
}

void sum()//Defination
{
	int a,b,sum;
	printf("Enter the a and b");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("Sum of %d and %d is %d",a,b,sum);
}