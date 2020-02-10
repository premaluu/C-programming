
//array intialization
/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int a[5];//array declaration
	int i;
	a[0]=1;//intialization
	a[1]=2;//intialization
	a[2]=3;//intialization
	a[3]=4;//intialization
	a[4]=5;//intialization
	for(i=0;i<5;i++)
	{
		printf("\n%d",a[i]);//i is as index of array every time i is increase it will display element of that perticular index
	}		
	return 0;
}