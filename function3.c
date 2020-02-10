//function without argument with return type
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int sum();//Declaration

int main()
{
	int c;
	c=sum();//calling
	printf("%d",c);
	return 0;
}

int sum()//Defination
{
	int a,b;
	printf("Enter the a and b");
	scanf("%d%d",&a,&b);
	printf("Sum of %d and %d is ",a,b);
	return a+b;
}