#include<stdio.h>
#include<conio.h>
void main()
{
	int x=100,y=200,temp;
	temp=x;
	x=y;
	y=temp;
	printf("swapping of x=%d,y=%d",x,y);
	getch();
}