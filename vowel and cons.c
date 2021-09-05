#include<stdio.h>


int main()

{
	char ch;
	printf("enter the alphabet:");
	scanf("%c",&ch);
	if(ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u')
	{
	
	printf("its %c vowel", ch);
	
    }
	else
	printf("its %c consonant", ch);
	
}




