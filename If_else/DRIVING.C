#include<stdio.h>
#include<conio.h>
void main()
{
	char gender;
	int age;
	clrscr();
	printf("\n Enter your gender (m/f):");
	scanf("%c",&gender);
	printf("\n Enter your age:");
	scanf("%d",&age);
	if(gender=='m' && age>19)
	{
		printf("\n in driving allowed for male driver");
	}
	else
	{
		printf(" in driving not allowed for malel driver");
	}
	getch();
}