#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void player()
{
int x=0;
ellipse(100,100,0,360,13,17);
circle(92,98,0);
circle(108,98,0);
while(x!=20)
{
arc(92+x,92,180,360,2);
x=x+4;
}
rectangle(92,118,109,140);
rectangle(87,118,92,126);
rectangle(109,118,114,126);
rectangle(92,140,98,145);
rectangle(102,140,109,145);
getch();
}