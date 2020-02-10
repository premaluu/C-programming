/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a = 7 , b = 8;
	
	//7 is 00000111 and 8 is 00001000
	printf("\n%d and %d bitwise and is %d",a,b,a&b); //answer is 00000000 means 0
	printf("\n%d and %d bitwise or is %d",a,b,a|b); //answer is 00001111 means 15
	printf("\n%d and %d bitwise not is %d and %d",a,b,~a,~b); //answer is 11111000 & 11110111 means 248 & 247
	return 0;
}