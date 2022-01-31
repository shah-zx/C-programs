#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()

{
	int i,j,k;
	printf("enter the number upto which you want cube");
	scanf("%d",&k);
	for(i=1;i<=k;i++)          // Here k is the variable which gives the  actual cube // 
	{
		for(j=1;j<=i;j++)
		{
			if(i==pow(j,3))    // Here j is the variable whose cube is to be found //
			printf("number is %d\n , cube is %d",j,i);
		}
	}
}

