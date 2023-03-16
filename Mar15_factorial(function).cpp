#include<stdio.h>
#include<conio.h>
int factorial(int n);
int factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
}

void main()
{
	int n,res;
	printf("Enter a no");
	scanf("%d",&n);
	res = factorial(n);
	printf("factorial of no is %d",res);
	getch();
}