#include<stdio.h>
#include<conio.h>
int main()
{
	char i = 65;
	for ( ; ; )
	{
		printf("%c\n",i++);
		if(i==70)
		goto stop;
	}
	stop : ;
	getche();
	
}

