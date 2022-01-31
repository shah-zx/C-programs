/* to fid the areas of different shapes*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int l,b;
	float result;
	char op;
	printf("Menu:- \n 1.triangle- t\n 2.square-s \n3.circle-c  \n4.rectangle-r ");
	printf("\nenter the value of l,b: ");
	scanf("%d%d",&l,&b);
	printf("enter the shape for the area to be find :\n");
	scanf(" %c",op);
	switch(op)
	{
		case 't' :
			result = 0.5*l*b;
			printf("result : %f",result);
			break;
			
        case 'r' :
		
			result = l*b;
			printf("result : %f",result);
			break;
			
		case 's' :
		
			result = l*l;
			printf("result : %f",result);
			break;
		
		case 'c' :
		
			result = 3.14*l*l;
			printf("result : %f",result);	
			break;
			
			default: 
			printf("wrong shape");		
	}
}
