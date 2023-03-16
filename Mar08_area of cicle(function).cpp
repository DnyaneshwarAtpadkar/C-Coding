#include<stdio.h>
#include<conio.h>
float Aocir(int r);
float Aocir(int r)
{
	return(3.14*r*r);
}

void main()
{
	int r;
	float ans;
	printf("enter a radius");
	scanf("%f",&r);
	ans = Aocir(r);  // actual parameter
	printf("area of cicle",ans);
	getch();

}