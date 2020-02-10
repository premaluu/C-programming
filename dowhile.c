/*
	created by premal upadhyay
*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int choice;
	do
	{
		printf("\n1.C\n2.C++\n3.Java\n4.Python\n5.JavaScript\n6.C#");
		printf("\nChoose your language...");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("\nC");
				break;
			case 2:
				printf("\nC++");
				break;
			case 3:
				printf("\nJava");
				break;
			case 4:
				printf("\nPython");
				break;
			case 5:
				printf("\nJavaScript");
				break;
			case 6:
				printf("\nC#");
				break;
			default:
				printf("\nEnter the valid choice");
				break;
		}
	}
	while(1);
	return 0;
}