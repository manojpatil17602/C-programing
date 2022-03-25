#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i;
	clrscr();
	printf("\n Enter the starting no");
	scanf("%d",&a);
	printf("\n Enter the ending no");
	scanf("%d",&b);
	for(i=a;i<=b;i++)
	{
		printf("\n %d",i);
	}
	getch();
}
