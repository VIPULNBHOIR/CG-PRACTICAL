#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void main(){
 int gd=DETECT,gm=0;
 detectgraph(&gd,&gm);
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 int tx,ty;
 int x1,y1,x2,y2,X1,X2,Y1,Y2;
 printf("Enter the coordinates x1,y1,x2,y2");
 scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
 printf("transalte in x & translate in y::");
 scanf("%d%d",&tx,&ty);
 printf("Line before Translation: \n\n\n\n");
 line(x1,y1,x2,y2);

 X1=x1+tx;
 X2=x2+tx;
 Y1=y1+ty;
 Y2=y2+ty;
 printf("\nline after translation:");
 line(X1,Y1,X2,Y2);

 getch();
}
