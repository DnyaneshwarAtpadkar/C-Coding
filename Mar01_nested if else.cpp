#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	int w,x,y,z;
	printf("Enter the value of angles");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	printf("Enter the value of sides");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a==90)
	{
		if(b==90)
		{
			if(c==90)
			{
				if(d==90)
				{
					if(w==x && x==y && y==z && z==w)
					{
						printf("square is formed");
					}

					else
						printf("sqaure is not formed");
				}
				else
					printf("sqaure is not formed");
			}
			else
				printf("sqaure is not formed");
		}
		else
			printf("sqaure is not formed");
	}
	else
		printf("sqaure is not formed");
	getch();
}
			
	

