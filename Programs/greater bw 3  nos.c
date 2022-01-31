#include<stdio.h>
#include<conio.h>

int main()
{
	int no1 , no2 , no3;
	printf("enter all the three numbers: ");
	scanf("%d%d%d",&no1,&no2,&no3);
	if(no2<=no1 && no1>=no3)
	
	
		printf("no. 1 is gretaer of all which is: %d",no1);
    
	else if(no1<=no2 && no2>=no3)
	
	
		printf("no. 2 is greater of all which is :%d",no2);
    
	else
	
		printf("no. 3 is greater of all which is :%d",no3);
	
}

