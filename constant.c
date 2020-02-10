/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	const float PI = 3.14;
	int area;
	printf("Enter the radius :- ");
	scanf("%d",&r);
	area = PI * r * r;
	printf("Area of circle is  :- %d",area);
	return 0;
}