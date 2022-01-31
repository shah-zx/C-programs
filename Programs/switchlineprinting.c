// For printing different types of line by selecting the option //

#include<stdio.h>
#include<conio.h>
int main()

{
	int no;
	printf("Enter the no. of your choice for the given line:- \n");
	printf("1)\t **********************\n");
	printf("2)\t ----------------------\n");
	printf("3)\t ######################\n");
	printf("4)\t ......................\n");
	scanf("%d",&no);
	switch(no)
	{
	
	case 1:
		printf("***********************************************");
		break;
		case 2:
			printf("-------------------------------------------");
			break;
			case 3:
				printf("########################################");
				break;
				case 4:
					printf(".....................................");
					break;
					default :
						printf("Invalid operation");
						
}
getch();
}

