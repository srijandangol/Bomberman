
#include<graphics.h>
void fire(int f)
{
if(f==1)
{
setcolor(14);
setfillstyle(1,14);
rectangle(125,110,155,140);
floodfill(130,135,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(135,115,"F"); //first
}
else if(f==2)
{
setcolor(14);
setfillstyle(1,14);
rectangle(365,70,395,100);
floodfill(370,87,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(375,75,"F"); //second
 }
 else if(f==3)
 {
setcolor(14);
setfillstyle(1,14);
rectangle(445,110,475,140);
floodfill(450,115,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(455,115,"F");//third
 }
 else if(f==4)
 {
setcolor(14);
setfillstyle(1,14);
rectangle(365,230,395,260);
floodfill(370,235,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(375,235,"F"); //fourth
  }
  else if(f==5)
  {
setcolor(14);
setfillstyle(1,14);
rectangle(445,390,475,420);
floodfill(450,400,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(455,395,"F");//fifth
 }
 else if(f==6)
 {
setcolor(14);
setfillstyle(1,14);
rectangle(245,230,275,260);
floodfill(270,235,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(255,235,"F"); //fourth
 }
 else if(f==7)
 {
setcolor(14);
setfillstyle(1,14);
rectangle(125,390,155,420);
floodfill(130,400,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(135,395,"F");//fifth
 }
 else if(f==8)
 {
setcolor(14);
setfillstyle(1,14);
rectangle(245,430,275,460);
floodfill(270,435,14);
setcolor(10);
settextstyle(1,0,2);
outtextxy(255,435,"F"); //fourth
}
}