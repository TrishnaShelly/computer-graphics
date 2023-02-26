#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd = DETECT,gm;
initgraph(&gd,&gm,"c://turboc3//bgi");
putpixel(50,50,WHITE);
getch();
closegraph();
getch();
}
