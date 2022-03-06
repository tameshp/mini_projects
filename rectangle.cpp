#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
	int gd=DETECT,gm;
	init graph(&gd,&gm,"");
	int left,top,right,bottom;
	left=(getmaxx()/2)-50;
	right=(getmaxx()/2)+50;
	top=(getmaxy()/2)-37;
	bottom=(getmaxy()/2)-38;
	rectangle(left,top,right,bottom);
	getch();
	closegraph();
}
