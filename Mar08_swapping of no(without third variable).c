#include<stdio.h>
#include<conio.h>
void main()
{
	int x=100,y=200,temp;
	x=x+y;
	y=x-y;
	x=x-y;
	printf("swapping of x=%d,y=%d",x,y);
	getch();
}