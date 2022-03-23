#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	clrscr();
	printf("\n Enter the starting number");
	scanf("%d",&a);
	printf("\n Enter the ending number");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("\n %d",i);
	}
	getch();
}