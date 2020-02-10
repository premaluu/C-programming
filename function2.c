//function with argument without return type
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>
void sum(int a,int b);//Declaration

int main()
{
	int a,b;
	printf("\nEnter the a and b ");
	scanf("%d%d",&a,&b);
	sum(a,b);//calling these argument are actual 
	return 0;
}

void sum(int a,int b) //Defination these argument are formal
{
	int sum=a+b;
	printf("sum of %d and %d is %d",a,b,sum);
}