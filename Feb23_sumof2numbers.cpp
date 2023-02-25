#include<stdio.h>
#include<conio.h>
void main()
{
	/*
	int x=10;  //integer datatype,x is variables name, 10 is value 
	int y=20;
	int sum=x+y;
	printf("sum of 2 nos is %d",sum); //%d is format specifier for int
	getch();
	*/
	
	//take input from user

	int a,b,sum;
	printf("Enter first number");
	scanf("%d",&a); //to read/take input from the user, & denotes addr
	printf("Enter second number");
	scanf("%d",&b);
	sum=a+b;
	printf("the sum of 2 numbers is %d",sum);
	getch();
}