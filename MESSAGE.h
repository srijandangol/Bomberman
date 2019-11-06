#include<stdio.h>
#include<iostream.h>
#include<graphics.h>
#include<dos.h>
void message()
{
 setcolor(3);
 setfillstyle(11,7);
 rectangle(150,150,500,300);//1
 rectangle(155,155,495,295);//2
 floodfill(153,152,3);
 setfillstyle(1,2);
 rectangle(157,157,493,293);
 floodfill(160,160,3);
 setcolor(8);
 setfillstyle(1,8);
 rectangle(180,301,520,320);
 floodfill(200,310,8);
 rectangle(501,185,520,300);
 floodfill(505,250,8);
 settextstyle(0,0,3);
 setcolor(4);
 outtextxy(220,170,"GAME OVER");
 setcolor(0);
 settextstyle(0,0,1);
 outtextxy(240,220,"DO YOU WANT TO REPLAY");
 setfillstyle(1,3);
 rectangle(200,260,260,280);
 floodfill(210,270,0);
 setfillstyle(1,3);
 rectangle(390,260,450,280);
 floodfill(400,270,0);
 outtextxy(220,268,"YES");
 outtextxy(413,268,"NO");
}
