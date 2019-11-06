#include<graphics.h>
void ddbrick(int a,int b,int c,int d)
{
int l,m;
l=a;
m=c;
for(int i=1;i<=8;i++)
{
for(int j=1;j<=3;j++)
{
setfillstyle(1,12);
rectangle(a,b,c,d);
floodfill(a+5,b+2,7);
a=a+13;
c=c+13;
}
b=b+5;
d=d+5;
a=l;
c=m;
}
}