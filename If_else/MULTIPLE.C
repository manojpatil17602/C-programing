#include<stdio.h>
#include<conio.h>
void main()
{
	int number;
	clrscr();
	printf("\n Enter a number");
	scanf("%d",& number);
	if(number%7==0)
	{
		printf("%d is multiple of 7",number);
	}
	else
	{
		printf("%d is not multiple of 7",number);
	}
	getch();
}