#include<stdio.h>
#include<conio.h>
int main()
{
	int i,c=0;
	for (i=0;i<=100;i++)
	{
		if(i%2!=0&&i%3!=0&&i%5!=0)
		{
		
	    printf("%d\n",i);	
	       c++;
	    }
	 
	}
	
	printf("The total numbers are :- %d",c);
	getche();
}

