/*to convert celcius to farenhiet and vice versa*/
#include<stdio.h>
#include<conio.h>

int main()
{
	float temp_cels;
	float temp_fahr;
	printf("enter the value of celcius");
	scanf("%f", &temp_cels);
	temp_fahr= (temp_cels*1.8)+32;
	printf("farenhiet: %.2f", temp_fahr );
}

