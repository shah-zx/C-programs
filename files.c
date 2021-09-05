// A program for displaying current directory 1) .exe files 2) .bat files 3) .obj files 4) .bak files //
#include<stdio.h>
#include<conio.h>
int main()
{
	int c;
	printf("File listing menu:-\n ");
	printf("1).exe\n");
	printf("2).bat\n");
	printf("3).obj\n");
	printf("4).bak\n");
	printf("Enter the number of your choice :-");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			system("dir .exe");
			break;
			case 2:
				system("\dir .c");
				break;
				case 3:
					system("\dir .obj");
					break;
					case 4:
						system("\dir .bak");
						break;
						default:
						        break;
					
	}
	
	getch();
	
}
