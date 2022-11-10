#include<stdio.h>
#include<graphics.h>
#include<dos.h>

void boundaryfill(int x, int y,int f_color,int b_color){
 if(getpixel(x,y)!=b_color && getpixel(x,y)!=f_color)
 {
 putpixel(x,y,f_color);
 boundaryfill(x+1,y,f_color,b_color);
 boundaryfill(x,y+1,f_color,b_color);
 boundaryfill(x-1,y,f_color,b_color);
 boundaryfill(x,y-1,f_color,b_color);
}
}
void main()
{
int gm,gd=DETECT,len;
int x,y;
printf("enter x , y:");
scanf("%d%d",&x,&y);
printf("Enter length l:");
scanf("%d",&len);
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
square(x,y,len);
boundaryfill(x,y,4,15);
delay(1000);
closegraph();
}