#include<graphics.h>
#include<aboutf.h>
#include<helpf.h>
int e1=0;

int bmouse(int a)
{
int x,y,click,temp;
setposi(100,500);
callmouse();
if(a==1)
{
about();
}
else if(a==2)
{
	help();
}
while(e1==0)
{
click=mouseposi(x,y);
if(click==1||click==2)
{
if((x>=550&&x<=620)&&(y>=425&&y<=452))
{
e1=9;
}
}
}
temp=e1;
e1=0;
mousehide();
return(temp);
}
