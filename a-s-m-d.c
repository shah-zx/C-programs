#include<stdio.h>
#include<conio.h>

int main()
{
	int a,b;
	float result;
	char op;
	printf("enter the values of a and b :");
	scanf("%d%d",&a,&b);
	printf("which operation to perform :");
	scanf(" %c",&op);
	switch(op)
	{
		case '+' :
			result = a+b;
			break;
		case '-' :
		    result = a-b;
			break;
		case '/' :
		    result = a/b;
		    break;
		case '*' :
		    result = a*b;			
		    break;
		    
		    
		    default :
		    	printf("wrong operation");
	}
	
	printf("result = %f",result);
    

}
