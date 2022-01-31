#include<stdio.h>
#include<conio.h>
int main()

{
	int no,a,b,c;
    printf("Following are the operations for performing different opeartions:- \n");
    printf("1)add\n2)mul\n3)div\n4)rem\n5)lar\n");
    printf("Enter two numbers :-");
    scanf("%d%d",&a,&b);
    printf("Enter the opeartion of your choice:- ");
    scanf("%d",&no);
    switch(no)
    {
    	case 1:
    		c=a+b;
    		printf("Addition is %d:-",c);
    		break;
    		case 2:
    			c=a*b;
    			printf("Multiplication is:- %d ",c);
    			break;
    			case 3:
    				c=a/b;
    				printf("Division is :- %d",c);
    				break;
    				case 4:
    					c=a%b;
    					printf("Remainder is :- %d",c);
    					break;
    					case 5:
    						if(a>b)
							printf("The larger number is :- %d",a);
							else 
							if (b<a)
							printf("The larger number is :- %d",b);
							break;
							default :
								printf("Invalid operation");
						}
    			
                          getch();    		
	}
    
    

