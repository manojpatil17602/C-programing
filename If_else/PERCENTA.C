#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	float f=0;
	clrscr();
	printf("\n enter the physics marks:");
	scanf("%d",&a);
	printf("\n enter the math marks:");
	scanf("%d",&b);
	printf("\n enter the marathi marks:");
	scanf("%d",&c);
	printf("\n enter the hindi marks:");
	scanf("%d",&d);
	printf("\nenter the english marks:");
	scanf("%d",&e);
	f=(a+b+c+d+e)/5;
	printf("\n Percentage=%f",f);
	if(f>35)
	{
		printf("\n student is passed");
	}
	else
	{
		printf("\n student is failed");
	}
	getch();
}