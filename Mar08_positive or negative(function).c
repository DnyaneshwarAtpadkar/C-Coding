#include<stdio.h>
#include<conio.h>

int check(int a);
int check(int a)
{
	if(a>0)
		return 1;
	else
		return 0;
}

void main()
{
	int y,res;
	printf("enter a no");
	scanf("%d",&y);
	printf("%d",y);
	res=check(y);
	printf("%d",res);
	if(res==1)
		printf("no is positive");
	else
		printf("no is negative");
	getch;
}
/*

int check(int x);
int check(int x)
{
	if(x>0)
		return 1;
	else
		return 0;
}

void main()
{
	int x,res;
	printf("Enter a no ");
	scanf("%d",&x);
	printf("%d",x);
	res = check(x);

	if(res==1)
		printf("positive");
	else
		printf("negative");
	getch();

}*/