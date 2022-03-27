#include<stdio.h>
#include<conio.h>
void main()
{
	int age;
	clrscr();
	printf("\n Enter your age:");
	scanf("%d",&age);
	if(age>=20)
	{
		printf("\n You are eligible for voting");
	}
	else
	{
		printf("\n You are not eligible for voting");
	}
	getch();
}