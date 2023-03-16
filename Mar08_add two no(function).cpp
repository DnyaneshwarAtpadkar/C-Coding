#include<stdio.h>
#include<conio.h>

void add();
void add()
{
	int a,b,res;
	printf("Enter 2 nos");
	scanf("%d%d",&a,&b);
	res=a+b;
	printf("res is %d\n",res);
}


void main()
{
	printf("msg 1\n");
	printf("msg 2\n");
	add();
	printf("msg 3\n");
	printf("msg 4\n");
	add();
	getch();

}