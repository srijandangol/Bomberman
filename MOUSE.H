#include<graphics.h>
int exx=0;

int mouse()
{
int x,y,clickk=0,temp;
setposi(100,500);
callmouse();
while(exx==0)
{
clickk=mouseposi(x,y);
if(clickk==1||clickk==2)
{
if((x>=200&&x<=260)&&(y>=260&&y<=280))
{
exx=8;
mousehide();
}
 if((x>=390&&x<=450)&&(y>=260&&y<=280))
{
exx=9;
}
}
}
temp=exx;
exx=0;
clickk=0;
mousehide();
return(temp);
}


