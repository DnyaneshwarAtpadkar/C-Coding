#include<stdio.h>
#include<conio.h>

void SI();
void SI()
{
	float p,n,r,si;
	printf("\n enter value for p,n,r");
	scanf("%f%f%f",&p,&n,&r);
	si=(p*n*r)/100;
	printf("\n simple interest is %f",si);

}
void main()
{
	SI();
	SI();
	getch();
}