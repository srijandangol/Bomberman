#include<graphics.h>
void flam(int fx,int fy)
{
int c1=12,c2=14; 
for(int k=1;k<=2;k++)
 {
 for(int i=1;i<13;i++)
{
setcolor(c1);
setfillstyle(1,c1);
circle(fx,fy,3+i);
floodfill(fx,fy,c1);
setcolor(c2);
circle(fx-4-i,fy-4-i,3);
circle(fx-4-i,fy+4+i,3);
circle(fx+4+i,fy-4-i,3);
circle(fx+4+i,fy-4-i,3);
circle(fx-i,fy-4-i,3);
circle(fx+i,fy+4+i,3);
circle(fx-4-i,fy-i,3);
circle(fx+4+i,fy+i,3);
circle(fx-4-i,fy,4);
circle(fx+4+i,fy,4);
circle(fx,fy-4-i,4);
circle(fx,fy+4+i,4);
delay(5);
}
delay(20);
c1=2;
c2=2;
}
}