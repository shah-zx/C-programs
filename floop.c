#include<stdio.h>
#include<conio.h>
int main()
{
	int i,c=0;
	for(i=0;i<14;)
	{
		i++;
		printf("%5d\n",i);
		i=i+1;
		printf("%5d\n",i);
		c++;
	}
	printf("The number of repitions were :- %d",c);
}

