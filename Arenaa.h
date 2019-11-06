#include<arena.h>
#include<graphics.h>
void unblock()
{
int a=0;
arena();
setcolor(7);
for(int i=1;i<=11;i++)
{
setfillstyle(1,8);
rectangle(1,26+a,39,64+a);
floodfill(5,28+a,7);
a=a+40;
}
a=0;
setcolor(7);
for( i=1;i<=16;i++)
{
setfillstyle(1,8);
rectangle(1+a,32,39+a,64);
floodfill(5+a,38,7);
a=a+40;
}
a=0;
setcolor(7);
for( i=1;i<=11;i++)
{
setfillstyle(1,8);
rectangle(601,26+a,639,64+a);
floodfill(603,28+a,7);
a=a+40;
}
a=0;
setcolor(7);
rectangle(0,465,639,480);
for( i=1;i<=16;i++)
{
setfillstyle(1,8);
rectangle(1+a,465,39+a,479);
floodfill(5+a,468,7);
a=a+40;
}
a=0;
setcolor(7);
for( i=1;i<=7;i++)
{
setfillstyle(1,8);
rectangle(83+a,106,118+a,144);
floodfill(90+a,110,7);
a=a+80;
}
a=0;
setcolor(7);
for( i=1;i<=7;i++)
{
setfillstyle(1,8);
rectangle(83+a,186,118+a,224);
floodfill(90+a,195,7);
a=a+80;
}
a=0;
setcolor(7);
for( i=1;i<=7;i++)
{
setfillstyle(1,8);
rectangle(83+a,266,118+a,304);
floodfill(90+a,275,7);
a=a+80;
}
a=0;
setcolor(7);
for( i=1;i<=7;i++)
{
setfillstyle(1,8);
rectangle(41+a,346,78+a,384);
floodfill(50+a,355,7);
a=a+80;
}
a=0;
setcolor(7);
for( i=1;i<=7;i++)
{
setfillstyle(1,8);
rectangle(41+a,426,78+a,462);
floodfill(50+a,435,7);
a=a+80;
}
}