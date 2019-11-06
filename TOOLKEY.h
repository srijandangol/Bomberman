 #include<stdio.h>
 #include<conio.h>
 #include<graphics.h>
 void toolkey()
 {



  setcolor(8);
  setfillstyle(1,3);
   circle(580,85,16);
    floodfill(581,86,8);
  rectangle(571,78,577,83);//beye
  setfillstyle(1,8);
  rectangle(574,78,577,83);//se
  floodfill(575,79,8);
  rectangle(582,78,588,83);//be
  setfillstyle(1,8);
  rectangle(585,78,588,83);//se
  floodfill(586,79,8);
  setcolor(12);
  setfillstyle(1,15);
  rectangle(576,88,584,92);
  floodfill(577,89,12);

 setcolor(12);
 setfillstyle(1,4);
 line(570,76,577,72);//left_horiz
 line(570,76,570,65);//ldown
 line(577,72,570,65);//lup
 floodfill(572,73,12);
 setcolor(12);
 setfillstyle(1,4);
 line(580,72,587,76);//right_horiz
 line(580,72,587,65);//rdown
 line(587,76,587,65);//rup
 floodfill(581,72,12);

 }