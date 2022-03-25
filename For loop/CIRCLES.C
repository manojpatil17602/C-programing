#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	for(i=1;i<=5;i++)
	{
		circle(290,210,10*i);
	}
	getch();
}