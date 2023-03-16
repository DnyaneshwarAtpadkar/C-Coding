#include<stdio.h>
#include<conio.h>
int add(int n1,int n2)
{
	int a=21,b=23;
	printf("%d %d",a,b);
	return n1+n2;
}

void main()
{
	int x=100,y=200,res;
	
	res=add(x,y);
	printf("\n%d",res);
	getch();
}