#include<stdio.h>
#include<conio.h>
float si(float p,float n,float r);
float si(float p,float n,float r)
{
	float si;
	si=(p*n*r)/100;
	return si;
}
void main()
{
	float p,n,r;
	float ans;
	printf("\n enter p,n,r");
	scanf("%f%f%f",&p,&n,&r);
	ans=si(p,n,r);
	printf("simple interest is %f",ans);
	getch();
}