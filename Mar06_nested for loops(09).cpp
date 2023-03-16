#include<stdio.h>
#include<conio.h>
void main()
{
	int one,two,three,four,five;
	for(one=1,two=2,three=3,four=4,five=5;
		one<=10,two<=20,three<=30,four<=40,five<=50;
		one++,two=two+2,three=three+3,four=four+4,five=five+5
		)
	{
		printf("%d\t%d\t%d\t%d\t%d\t\n",one,two,three,four,five);
	}
	getch();
}