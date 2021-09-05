// Here we will see the fgetc , fputc and other releated functions. //

#include<stdio.h>
#include<conio.h>




int main()

{


FILE *ptr;

// The gets function //

ptr = fopen("test.txt"  , "a+"); // If we open the file in r+ mode then it will read and write the content into the other file.
char str[34] = "Hey there , how are you";

 fgets(str , 5 , ptr); // Here 5 is the number of characters we want to read from the file we opened //
 printf("The string i got is :- %s" , str);


// The putc function //

// fputc('s' , ptr);     

// The puts function //

// fputs("Shahnawaz sayyed" ,ptr);


// // The getc function //
// char c = fgetc(ptr);
// printf(" I read this character form the file :- %c" , c);



}
