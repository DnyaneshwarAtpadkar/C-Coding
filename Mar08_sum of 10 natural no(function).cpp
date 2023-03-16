#include<stdio.h>
#include<conio.h>
int sum();
int sum()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
	}
	return sum;

}
void main()
{
	int res,a;
	res =sum();
	printf("sum of 10 natural no is %d",res);
	getch();
}