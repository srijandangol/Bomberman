 #include<stdio.h>
 #include<conio.h>
#include<dos.h> 
#include<graphics.h>
 void toolkey(int Tox,int Toy)
 { 
int j=0;
  setcolor(15);
  setfillstyle(1,3);
   circle(Tox,Toy+j,16);
    floodfill(Tox+1,Toy+1+j,15);

  setfillstyle(1,7);
  rectangle(Tox-9,Toy-7+j,Tox-3,Toy-2+j);//bleye
floodfill(Tox-5,Toy-3,15);

  setfillstyle(1,8);
  rectangle(Tox-7,Toy-5+j,Tox-3,Toy-2+j);//sleye
  floodfill(Tox-5,Toy-3+j,15);

  setfillstyle(1,8);
  rectangle(Tox+2,Toy-7+j,Tox+8,Toy-2+j);//breye
  floodfill(Tox+3,Toy-5+j,15);

  setfillstyle(1,7);
  rectangle(Tox+5,Toy-5+j,Tox+8,Toy-2+j);//sreye
  floodfill(Tox+6,Toy-6+j,15);
  setcolor(12);
  setfillstyle(1,15);
  rectangle(Tox-4,Toy+3+j,Tox+4,Toy+7+j);
  floodfill(Tox+3,Toy+4+j,12);

 setcolor(12);
 setfillstyle(1,4);
 line(Tox-10,Toy-9+j,Tox-3,Toy-13+j);//left_horiz
 line(Tox-10,Toy-9+j,Tox-10,Toy-20+j);//ldown
 line(Tox-3,Toy-13+j,Tox-10,Toy-20+j);//lup
 floodfill(Tox-8,Toy-12+j,12);
 setcolor(12);
 setfillstyle(1,4);
 line(Tox+5,Toy-11+j,Tox+12,Toy-7+j);//right_horiz
 line(Tox+5,Toy-11+j,Tox+13,Toy-18+j);//rup
 line(Tox+12,Toy-9+j,Tox+13,Toy-18+j);//rdown
 floodfill(Tox+11,Toy-14+j,12);
 }
