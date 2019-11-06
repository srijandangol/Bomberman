#include<graphics.h>
#include<NGAMEP.h>
#include<menu.h>
#include<dos.h>
#include<message.h>
#include<gexit.h>
#include<process.h>
#include<mouse.h>
#include<mouset.h>
#include<bmouse.h>
#include<multi.h>
void main()
{
int gd=DETECT,gm,choice;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
bar(150,300,500,320);
outtextxy(280,270,"Loading...");
 for(int l=0;l<=350;l++)
{
for(int o=0;o<=20;o++)
{
setcolor(2);
line(150,300+o,150+l,300+o);
}
delay(5);
}
for(int o=1;o<=15;o++)
{ setcolor(o);
outtextxy(280,270,"Loading...");
delay(10);
}
k:
cleardevice();
choice=menu();
cleardevice();
while(1)
{
switch(choice)
{
case 1:
choice=ngame();
break;
case 2:
choice=multi();
break;
case 3:
choice=bmouse(2);
break;
case 4:
choice=bmouse(1);
break;
case 5:
choice=bmouse(0);
break;
case 6:
message();
choice=mouset();
cleardevice();
break;
case 7:
exitt();
choice=mouse();
break;
case 8:
cleardevice();
closegraph();
exit(0);
break;
case 9:
goto k;
break;
}
}
}