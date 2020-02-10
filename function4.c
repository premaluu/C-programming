//function with argument with return type
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int sum(int a,int b);//Declaration

int main()
{
	int a,b,c;
	printf("\nEnter the a and b ");
	scanf("%d%d",&a,&b);
	c=sum(a,b);//calling with actual argument
	printf("\nSum of %d and %d is %d",a,b,c);
	return 0;
}

int sum(int a,int b)//defination with formal argument
{
	return a+b;
}