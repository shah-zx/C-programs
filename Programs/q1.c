#include<stdio.h>

int main()
{
int a=0,b=1,c;
if(a && (b=5))
c=1;
else
c=2;
printf("%d\t%d\t%d",a,b,c);
return 0;
}
