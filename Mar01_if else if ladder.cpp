#include<stdio.h>
#include<conio.h>
void main()
{
	float marks;
	float per;
	printf("Enter total marks");
	scanf("%f",&marks);
	per =((marks/500)*100);
	printf("percent is %f \n",per);
	if(per>=75)
		printf("Grade is A");
	else if(per>=60.00)
		printf("Grade is A");
	else if(per>=40.00)
		printf("Grade is A");
	else
		printf("Grade is F");
	getch();

}