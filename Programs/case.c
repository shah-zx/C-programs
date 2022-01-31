/* program to check wether the given program is in upper case or lower case . ceate an uiser defined fun for the same*/
/*ASCII CODES OF UPPER CASE ATRE IN THE RANGE :- 65 TO 90*/
/*ASCII CODES OF LOWER CASE ATRE IN THE RANGE :-  97 TO 122*/


#include<stdio.h>


void  checkcase (char ch)
{
	if(ch>=65 && ch<=90)
	printf("the character %c is in the uppercase",ch);
	else if (ch>=97 && ch<=122)
	printf("the character %c is in the lowercase ",ch);
	else
	printf("the character  %c is not an alphabet");
 } 




int main()
{
	char ch;
	printf("enter the character");
	scanf(" %c",&ch);
	checkcase(ch);
}



