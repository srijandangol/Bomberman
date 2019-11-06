#include<iostream.h>
#include<graphics.h>
 void vashme(int VX,int VY)
 {
  setcolor(2);
setfillstyle(1,2);
rectangle(VX-17,VY-19,VX+17,VY+21);
floodfill(VX,VY,2);
 setcolor(8);
  setfillstyle(1,14);
  arc(VX,VY,0,180,14);
  line(VX-14,VY,VX-4,VY+10);//left
  line(VX+14,VY,VX+4,VY+10);//right
  rectangle(VX-6,VY+10,VX+6,VY+17);//br
  floodfill(VX+1,VY+2,8);

  setfillstyle(1,14);
  rectangle(VX-6,VY+10,VX+6,VY+17);//bottom
  floodfill(VX-4,VY+12,8);

  rectangle(VX-10,VY-6,VX-3,VY+1);//leye
  rectangle(VX+3,VY-6,VX+10,VY+1);//reye

  setfillstyle(1,8);
  rectangle(VX-7,VY-3,VX-3,VY+1);//in_leye
  floodfill(VX-6,VY-1,8);

  setfillstyle(1,8);
  rectangle(VX+6,VY-3,VX+10,VY+1);//in_reye
  floodfill(VX+7,VY-2,8);

  rectangle(VX-2,VY+5,VX+2,VY+6);//mouth
}