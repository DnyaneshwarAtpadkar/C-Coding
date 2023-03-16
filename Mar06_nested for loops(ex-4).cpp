#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=11;j<=15 ;j++)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	for(i=1;i<=5;i++)
	{
		for(j=15;j>=11 ;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
}