// A program to calculate the number of votes secured by three voters //

#include<stdio.h>
#include<conio.h>

int main()

{
int a,b,o=0,i;
char v;
printf("press A or B");
for(i=1;i<=3;i++)
{
	printf("voter no. %d",i);
	printf("enter vote :-");
	v = getche();
	v = toupper(v);
	if(v=='A')
	a++;
	else if(v=='B')
	b++;
	else 
	o++;
}
printf("status of votes :-");
printf("A got %d votes",a);
printf("B got %d votes",b);
printf("invalid votes :- %d",o);

}
