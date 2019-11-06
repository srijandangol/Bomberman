#include<graphics.h>
#include<conio.h>
#include<dos.h>
void over()
{
setcolor(15);
setfillstyle(1,2);
rectangle(5,5,635,470);  //big rectangle
floodfill(45,66,15);
setcolor(3);
setfillstyle(1,3);
rectangle(20,22,620,452); //small rectangle
floodfill(22,38,3);
setcolor(8);
setfillstyle(1,14);
rectangle(550,425,620,452);
floodfill(553,427,8);
outtextxy(568,436,"Back");
setcolor(8);
setfillstyle(1,14);
rectangle(150,40,360,90);    //by rectangle
floodfill(155,45,8);
setcolor(0);
settextstyle(1,0,0);
outtextxy(210,50,"CONGRATULATION");
}
