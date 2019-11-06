#include<graphics.h>
void door()
{  
setcolor(2);
  setfillstyle(1,2);
  rectangle(560,230,600,270);
  floodfill(565,233,2);
	  setcolor(12);
  setfillstyle(1,14);
  rectangle(560,230,600,270);
  floodfill(565,233,12);
  setfillstyle(1,8);
  line(575,240,575,260);//middle line left
  line(560,230,575,240);
  line(575,260,560,270);
  floodfill(561,235,12);
  setfillstyle(1,8);
  line(585,240,585,260);//right middle line
  line(585,240,600,230);
  line(585,260,600,270);
 floodfill(586,250,12);


}