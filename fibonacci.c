/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int n,i,n1=0,n2=1,temp=0;
	printf("\nEnter the number ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d",n1);
		temp=n1+n2;
		n1=n2;
		n2=temp;
	}
	return 0;
}