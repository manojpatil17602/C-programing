#include<stdio.h>
#include<conio.h>
void cal();
void main()
{
	clrscr();
	printf("*****CALCULATOR*****");
	printf("\n 1.addition");
	printf("\n 2.substraction");
	printf("\n 3.multiplication");
	printf("\n 4. division");
	cal();
	getch();
}
void cal()
{
	int a,b,opr,c=0;
	printf("\n Enter Any Two No:");
	scanf("%d%d",&a,&b);
	printf("\n Enter Operatiom No:");
	scanf("%d",&opr);
	switch(opr)
	{
		case 1:
			c=a+b;
			printf("\n addition=%d",c);
		break;
		case 2:
			c=a-b;
			printf("\n substraction=%d",c);
		break;
		case 3:
			c=a*b;
			printf("\n multiplication=%d",c);
		break;
		case 4:
			c=a/b;
			printf("\n division=%d",c);
		break;
		default:
			printf("\n invalid operation no");
		}
	}

