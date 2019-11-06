#include<graphics.h>
int e=0;

int mouset()
{
int x,y,click,temp;
setposi(100,500);
callmouse();
while(e==0)
{
click=mouseposi(x,y);
if(click==1||click==2)
{
if((x>=200&&x<=260)&&(y>=260&&y<=280))
{
e=1;
}
 if((x>=390&&x<=450)&&(y>=260&&y<=280))
{
e=8;
}
}
}
temp=e;
e=0;
mousehide();
return(temp);
}


