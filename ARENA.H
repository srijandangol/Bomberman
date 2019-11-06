#include<graphics.h>
void arena()
{
setcolor(7);
setfillstyle(1,2);
rectangle(0,25,639,464);
floodfill(50,40,7);
setfillstyle(1,0);
rectangle(0,25,640,25);
floodfill(26,15,7);
setcolor(2);
line(0,478,639,478);
}