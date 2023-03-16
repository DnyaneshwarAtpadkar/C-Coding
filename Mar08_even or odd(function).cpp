#include<stdio.h>
#include<conio.h>

int checkEO(int a);
int checkEO(int a)
{
	if(a%2==0)
		return 1;
	else
		return 0;
}

void main()
{
	int a,res;
	printf("enter a no");
	scanf("%d",&a);
	printf("%d",a);
	res=checkEO(a);
	printf("%d",res);
	if(res==1)
		printf("no is EVEN");
	else
		printf("no is ODD");
	getch;
}