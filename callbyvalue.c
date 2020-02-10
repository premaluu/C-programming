/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

void swap(int a,int b);//declaration

int main()
{
	int a,b;
	printf("\nEnter any two number ");
	scanf("%d%d",&a,&b);//actual parameter
	printf("\nBefore swaping value of a and b is %d and %d",a,b);
	swap(a,b);
	printf("\nAfter swaping value of a and b is %d and %d",a,b);
	return 0;
}

void swap(int a,int b)//formal parameter
{
	int temp=a;
	a=b;
	b=temp;
	/*changes of value happens in formal parameter because copy of actual parameter is passed in function when it calls*/
}