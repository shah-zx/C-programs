// A program for converting years into minutes , hours , days , months , seconds //
#include<stdio.h>
#include<conio.h>
int main()

{
	int yrs , min , hrs , dys , mns , scs , ch ;
	printf("******Menu******\n");
	printf("1)Months\n2)Days\n3)Hours\n4)Minutes\n5)Seconds\n");
	printf("Enter one of the following to be converted from years:-\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the year for number of months :-");
			scanf("%d",&yrs);
			mns=yrs*12;
			printf("The months are :- %d",mns);
			break;
			case 2:
				printf("Enter the months for number of days :-");
				scanf("%d",&mns);
				dys=mns*30;
				printf("The days are :- %d",dys);
				break;
				case 3:
					printf("Enter the days for number of hours :-");
					scanf("%d",&dys);
					hrs=24*dys;
					printf("The hours are :- %d",hrs);
					break;
				case 4:
					printf("Enter the hours for number of minutes :-");
					scanf("%d",&hrs);
					min=hrs*60;
					printf("The minutes are :-%d",min);
					break;
					case 5:
						printf("Enter the minutes  for number of seconds :-");
						scanf("%d",&min);
						scs=min*60;
						printf("The seconds are :- %d",scs);
						break;
						default:
							printf("Invalid opeartion");
						
	}
	getch();
}
