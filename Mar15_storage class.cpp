#include<stdio.h>
#include<conio.h>
int z=30;

void f1();
void f1()
{
	int x=20;
	printf("\n x=%d",x);   // block scope local variable
	//printf("\n y=%d",y);   //error
	printf("\n z=%d",z);   // no error cz global variable
}
void main()
{
	int y=10;
	//printf("\n x=%d",x);
	printf("\n y=%d",y);
	printf("\n z=%d",z);
	getch();

}