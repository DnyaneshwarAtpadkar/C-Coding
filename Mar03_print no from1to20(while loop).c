#include<stdio.h>
#include<conio.h>
void main()
/*{
	int i=1;
	while(i<=20)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}*/

// take input from user and print no from 1 to that no
{
	int x;
	int i=1;
	printf("Enter a number");
	scanf("%d",&x);
	while(i<=x)
	{
		printf("\n%d",i);
		i++;
	}
	getch();
}