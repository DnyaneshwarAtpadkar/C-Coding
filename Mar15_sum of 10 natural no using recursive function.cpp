#include<stdio.h>
#include<conio.h>
int sum(int n);
int sum(int n)
{
	int s=0;
	if(n==1)
		return 1;
	else
		s=n+sum(n-1);
	return s;
}


void main()
{
	int n =10,ans;
	ans=sum(n);
	printf("ans=%d",ans);
	getch();
}