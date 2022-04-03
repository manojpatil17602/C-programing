#include<stdio.h>
#include<conio.h>
int x=14; /* Global Variable */
int main()
{
	int y=23; /* Local Variable */
	clrscr();
	printf("\n x=%d, y=%d", x, y);
	getch();
	return 0;
}