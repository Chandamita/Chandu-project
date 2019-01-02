#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<time.h>
void triangle(int x1,int y1,int x2,int y2,float x3,float y3);
void Rotate(int x1,int y1,int x2,int y2,float x3,float y3);
void main()
{
    int gd=DETECT,gm;
    int x1=50,y1=10,x2=10,y2=100;
    float x3=107.9,y3=89.6;
    initgraph(&gd,&gm,"");
    triangle(x1,y1,x2,y2,x3,y3);
    Rotate(x1,y1,x2,y2,x3,y3);
    setcolor(1);
    triangle(x1,y1,x2,y2,x3,y3);
    sleep(5);
    closegraph();
    
}
void triangle(int x1,int y1,int x2,int y2,float x3,float y3)
{
   line(x1,y1,x2,y2);
   line(x2,y2,x3,y3);
   line(x1,y1,x3,y3);
}
void Rotate(int x1,int y1,int x2,int y2,float x3,float y3)
{
    float a1,b1,a2,b2,a3,b3,p,q,Angle;
    int r=45;
    p=(x1+x2+x3)/3;
    q=(y1+y2+y3)/3;
    Angle=(r*3.14)/180;
    a1=p+(x1-p)*cos(Angle)-(y1-q)*sin(Angle);
    b1=q+(x1-p)*sin(Angle)+(y1-q)*cos(Angle);
    a2=p+(x2-p)*cos(Angle)-(y2-q)*sin(Angle);
    b2=q+(x2-p)*sin(Angle)+(y2-q)*cos(Angle);
    a3=p+(x3-p)*cos(Angle)-(y3-q)*sin(Angle);
    b3=q+(x3-p)*sin(Angle)+(y3-q)*cos(Angle);
    triangle(a1,b1,a2,b2,a3,b3);
}

