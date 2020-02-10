/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int number;
	
	printf("Enter any number");
	scanf("%d",&number);
	if(number%2==0)
	{
		printf("\n%d is even number",number);
	}
	else
	{
		printf("\n%d is odd number",number);
	}
	return 0;
}