#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e,f=0,g=0;
	clrscr();
	printf("\n Enter the physics marks");
	scanf("%d",&a);
	printf("\n Enter the chemistry marks");
	scanf("%d",&b);
	printf("\n Enter the biology marks");
	scanf("%d",&c);
	printf("\n Enter the math marks");
	scanf("%d",&d);
	printf("\n Enter the english marks");
	scanf("%d",&e);
	f=a+b+c+d+e;
	printf("Addition of subject=%d",f);
	g=f/5;
	printf("\npercentage=%d",g);
	getch();
}