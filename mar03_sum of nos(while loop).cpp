#include<stdio.h>
#include<conio.h>
void main()
{
	int x,i=1,sum=0;
	printf("Enter a no");
	scanf("%d",&x);
	while(i<=x)
	{
		sum=sum+i;
		printf("\n i=%d and sum=%d",i,sum);
		i++;
		printf("\t sum of number is %d",sum);
	}
	getch();
}