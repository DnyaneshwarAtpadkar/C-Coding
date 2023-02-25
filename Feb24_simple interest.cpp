#include<stdio.h>
#include<conio.h>
void main()
{
	float p,n,r,SI;
	printf("Enter the value for P,N,R");
	scanf("%f %f %f",&p,&n,&r);
	SI=(p*n*r)/100;
	printf("simple interest is %f",SI);
	getch();
}