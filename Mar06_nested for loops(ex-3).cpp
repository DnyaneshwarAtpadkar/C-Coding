#include<stdio.h>
#include<conio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=2;j<=10  ;j=j+2)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
	getch();
}