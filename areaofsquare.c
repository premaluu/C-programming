/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>
float area(float side);

int main()
{
	float s,a;
	printf("\nEnter the side of square in meter ");
	scanf("%f",&s);
	a=area(s);
	printf("\nArea of square is %f",a);
	return 0;
}

float area(float side)
{
	return side*side;
}