#include<graphics.h>
void lifee(int l)
{
int lw=0,lh=0;
if(l==1)
{
setcolor(8);
setfillstyle(1,LIGHTRED);
arc(lw+95,lh+440,360,190,7);
arc(lw+109,lh+440,350,180,7);
arc(lw+100,lh+440,190,245,12);
arc(lw+104,lh+440,290,360,12);
ellipse(lw+94,lh+456,360,90,7,5);
ellipse(lw+109,lw+456,90,180,7,5);
floodfill(lw+110,lw+441,8);
}
else if(l==2)
{
setcolor(8);
setfillstyle(1,LIGHTRED);
arc(lw+295,lh+400,360,190,7);
arc(lw+309,lh+400,350,180,7);
arc(lw+300,lh+400,190,245,12);
arc(lw+304,lh+400,290,360,12);
ellipse(lw+294,lh+416,360,90,7,5);
ellipse(lw+309,lw+416,90,180,7,5);
floodfill(lw+310,lw+401,8);
}
else if(l==3)
{
setcolor(8);
setfillstyle(1,LIGHTRED);
arc(lw+495,lh+360,360,190,7);
arc(lw+509,lh+360,350,180,7);
arc(lw+500,lh+360,190,245,12);
arc(lw+504,lh+360,290,360,12);
ellipse(lw+494,lh+376,360,90,7,5);
ellipse(lw+509,lw+376,90,180,7,5);
floodfill(lw+510,lw+361,8);
}
}