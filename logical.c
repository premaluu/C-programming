/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 10 , b = 20;
	
	printf("\nLogical and is :- %d",a&&b); //0
	printf("\nLogical or is :- %d",a||b); //1
	printf("\nLogical not is :- %d",!(a&&b)); //1
	return 0;
}