#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main()

{
int gmode = DETECT , gdriver;
initgraph(&gmode , &gdriver , "");
line(50,50 , 300,300);
getch();
    
}
