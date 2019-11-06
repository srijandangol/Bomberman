#include<stdio.h>
#include<graphics.h>
void keyy()
{
setcolor(7);
setfillstyle(1,10);
rectangle(485,430,515,460);
floodfill(490,440,7);
setcolor(8);
setfillstyle(1,7);
line(500,443,511,443);//up line
line(500,443,500,446);
line(500,446,511,446);//down line
line(511,444,511,446);
//rectangle(205,198,216,201);

floodfill(503,444,8);
setfillstyle(1,7);
rectangle(507,446,511,449);//tip point
floodfill(508,447,8);
setcolor(7);
setfillstyle(1,4);
circle(495,445,7);//big circle
floodfill(495,445,7);
setcolor(8);
setfillstyle(1,7);
circle(495,445,4);//small circle
floodfill(495,446,8);
}