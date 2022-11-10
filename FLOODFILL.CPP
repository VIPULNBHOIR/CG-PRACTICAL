#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>
void floodfill(int x, int y,int f_color,int de_color){
 if(getpixel(x,y)==de_color)
 {
 putpixel(x,y,f_color);
 floodfill(x+1,y,f_color,de_color);
 floodfill(x,y+1,f_color,de_color);
 floodfill(x-1,y,f_color,de_color);
 floodfill(x,y-1,f_color,de_color);
 floodfill(y+1,x,f_color,de_color);
}
}
void main()
{
int gm,gd=DETECT;
int x,y,l,b;



initgraph(&gd,&gm,"C:\\turboc3\\bgi");
rectangle(20,20,50,50);
floodfill(30,30,RED,BLACK);
getch();
closegraph();

}