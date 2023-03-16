#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	for(i=1;i<=10;i++)
	{
		if(i==5)
			continue;
		else if(i==7)
			break;
		else
			printf("%d",i);
	}
	getch();
}