#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a,b;
	printf("Enter a number :- ");
	a=b=n;
	scanf("%d",&n);
	for(; ; a++,b--)
	{
	
	printf("%d",a);
	printf("%d",b);
    if(b==0)                
    break;
	}
	getche();
	
	
}
