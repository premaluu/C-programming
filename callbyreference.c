/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b);//declaration

int main()
{
	int a,b;
	printf("\nEnter any two numbers ");
	scanf("%d%d",&a,&b);
	printf("\nBefore swaping value of a and b is %d and %d",a,b);
	swap(&a,&b);//actual parameter we use '&' because address of actual parameter is passed in the function
	printf("\nAfter swaping value of a and b is %d and %d",a,b);
	return 0;
}

void swap(int *a,int *b)//formal parameter
{
	int temp=*a;
	*a=*b;
	*b=temp;
}