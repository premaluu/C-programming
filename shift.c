/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 7;
	
	//here 7 in binary is 00000111
	printf("\nBefore left shift a is :- %d",a);
	
	//after left 7 will into 00001110 it means it will be 14
	printf("\nAfter left shift a is :- %d",a<<1);
	
	//here 7 in binary is 00000111
	printf("\nBefore right shift a is :- %d",a);
	
	//after right shift 7 will into 00000011 it means it will be 3
	printf("\nAfter right shift a is :- %d",a>>1);
	return 0;
}