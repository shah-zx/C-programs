
// Program for adding even and odd numbers from 1 to 10. //

#include<stdio.h>
#include<conio.h>

int main()

{
int sumo = 0 , sume = 0 , i =0 , odd[5] , even[5] , a=-1 , b=-1;
for(i=0;i<=10;i++)
{
	if(i%2==0)
	even[++a] = i;
	else
	odd[++b] = i;
}
for(i=0;i<=5;i++)
{

printf("even:-%d\n",even[i]);
printf("odd:-%d\n",odd[i]);
sume = sume + even[i];
sumo = sumo + odd[i];
}
printf("sum of even numbers is:- %d\n",sume);
printf("sum of odd numbers is:- %d",sumo);
}

