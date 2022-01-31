#include<stdio.h>
#include<conio.h>

int main()
{
	char name[8] = {'A','R','R','A','Y'};
	int i=0;
	while(name[i]!='\0')  // Null character //
	{
		printf("[%c],[%u]",name[i],&name[i]);
		i++;
	}
	getche();
}

