#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	printf("Enter age");
	scanf("%d",&age);
	(age>18)? printf("Eligible to vote"): printf("NOT Eligible to vote");
	getch();
}