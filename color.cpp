 #include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
  int gd=DETECT,gm,j=0;
  initgraph(&gd,&gm,"c://tc//bgi");
  for(int i=0;i<=250;i++)
  {
  for( j=0;j<=100;j++)
  putpixel(i,j,WHITE);
  for ( j=100;j<=200;j++)
  putpixel(i,j,RED);
  for( j=200;j<=300;j++)
  putpixel(i,j,GREEN);
  }

  getch();
  closegraph();


}
