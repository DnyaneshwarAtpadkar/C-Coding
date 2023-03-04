#include<stdio.h>
#include<conio.h>
void main()
{
	int i,ecount=0,ocount=0;
	for(i=1;i<=20;i++)
	{
		printf("\n*"); //for printing stars
		if(i%2==0)
			ecount++;
		else
			ocount++;
	}
	printf("value for ecount is %d and value for ocount is %d\n",ecount,ocount);
	getch();
}