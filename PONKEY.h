 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
#include<dos.h> 
void ponkey()
 {
//for(int i=1;i<=5;i++)
//{
setcolor(8);
 setfillstyle(1,YELLOW);
 circle(579,445,18);
 floodfill(580,450,8);
 setcolor(8);
 rectangle(566,436,572,443);//be
 setfillstyle(1,8);
 rectangle(569,438,572,443);//se
floodfill(570,439,8);
 rectangle(586,436,592,443);//be
 setfillstyle(1,8);
 rectangle(589,438,592,443);//se
 floodfill(590,439,8);
 setcolor(8);
 setlinestyle(0,0,THICK_WIDTH);
 arc(579,445,210,330,12);
 arc(579,445,200,340,11);
cleardevice();
setcolor(8);
 setfillstyle(1,YELLOW);
 circle(579,445,18);
 floodfill(580,450,8);
 setcolor(8);
 rectangle(566,436,572,443);//be
 setfillstyle(1,8);
 rectangle(566,438,569,443);//se
floodfill(567,439,8);
 rectangle(586,436,592,443);//be
 setfillstyle(1,8);
 rectangle(586,438,589,443);//se
 floodfill(587,439,8);
 setcolor(8);
 setlinestyle(0,0,THICK_WIDTH);
 arc(579,445,210,330,12);
 arc(579,445,200,340,11);
cleardevice();


//}
 }