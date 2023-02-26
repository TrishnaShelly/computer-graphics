#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd =DETECT, gm,x1,x2,y1,y2,dx,dy,steps;
float slop;

printf("enter the starting point");
scanf("%d",&x1);
scanf("%d",&y1);
printf("enter the end point");
scanf("%d",&x2);
scanf("%d",&y2);
dx=x2-x1;
dy=y2-y1;
steps = dx>dy?dx:dy;
slop = dy/dx;
initgraph(&gd,&gm,"c://turboc3//bgi");
if(slop==1.0 ){
 while(steps>0)
 {
 putpixel((x1),(y1),WHITE);
 x1 +=1;
 y1 +=1;
 steps--;
 }
}
else if(slop>1.0)
{
 while(steps>0)
 {
 putpixel(x1,(y1),WHITE);
 x1 += 1/slop;
 y1 +=1;
 steps--;
 }
}else{
 while(steps>0)
 {
 putpixel((x1),(y1),WHITE);
 x1 +=1;
 y1 +=1;
 steps--;
 }
}
getch();
closegraph();
}
