#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,flag=1;
	printf("Enter a number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	printf("flag=%d\n",flag);
	if(flag==1)
		printf("\n no is prime no");
	else
		printf(" no is not prime no");
	getch();
}