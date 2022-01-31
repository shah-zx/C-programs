// NOTES //

// Here we will study about string //

// String is not a data type //
// We have char , int  , float other data type but no string data type in C.
// String is not supported data type in C but it is a very useful concept used to model real world entities like name , city etc.
// We express srings using an array of characters terminated  by a null character ('\0').

// We use :- character array :- String.

// String : array of characters terminated by null character.
// Strings in c is created by creating an array of characters.
// We need a extra character ('\0' or null character ) to tell the compiler that the string ends here.


// Method one of creating a character array :-
// Char name[] = "shahnawaz";
// Char name[] = {'h','a','r','r','y','\0} :- A valid string


// How to take a string from user :-
// Char str[52];   // Takes size 52 //
// gets(str);   // Gets function is a function of stdio libraray of C which takes a string from the user //
// printf("%s",str);
// puts(str);



#include<stdio.h>
#include<conio.h>
int main()
{


char str[] = {'s','h','a','n','u','\0'};
return 0;


}





