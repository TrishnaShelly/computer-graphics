 #include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm,x=150;
  initgraph(&gd,&gm,"c://tc//bgi");
  for(int i=0;i<=150;i++)
  {
  putpixel(x,i,WHITE);
  }
  getch();
  closegraph();


}
