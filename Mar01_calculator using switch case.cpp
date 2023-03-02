#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,ch,res;
	float ans;
	printf("Enter two numbers");
	scanf("%d%d",&a,&b);

	printf("1.Addition\n  2.substraction\n 3.Multiplication\n 4.Division ");
	scanf("%d",&ch);

	switch(ch)
	{
	case 1:res=a+b;
		printf("result of addition is %d",res);
		break;
	case 2:res=a-b;
		printf("result of substraction is %d",res);
		break;
	case 3:res=a*b;
		printf("result of multiplication is %d",res);
		break;
	case 4:ans=float(a-b);
		printf("result of Division is %f",ans);
		break;
	default:printf("case not matching");
	}
	getch();

}