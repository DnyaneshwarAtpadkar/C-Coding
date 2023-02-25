#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,r;
	int m=1;
	r=-10;
	printf("minus of of a is %d",r);

	//for post increment(++)
	printf("\n value of a normally is % d",a);
	r=a++;
	printf("\n value of r in post incre is %d",r);
	printf("\n value of r in post incre is %d\n",a);

	//for pre increment(++)
	printf("\n value of a normally is % d",a);
	r=++a;
	printf("\n value of r in pre incre is %d",r);
	printf("\n value of r in pre incre is %d\n",a);

	//for post decrement(--)
	printf("\n value of a normally is % d",a);
	r=a--;
	printf("\n value of r in post decre is %d",r);
	printf("\n value of r in post decre is %d\n",a);

	//for pre decrement(--)
	printf("\n value of a normally is % d",a);
	r=--a;
	printf("\n value of r in pre incre is %d",r);
	printf("\n value of r in pre incre is %d\n",a);

	//for sizeof
	printf("\n size of a in bytes is %d bytes \n",sizeof(a));

	//for not(!)
	printf("\n normal value of true is %d",m);
	printf("\n not of true is %d",!m);
	getch();
}