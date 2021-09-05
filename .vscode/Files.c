// Here we will learn about files in c programming //
// we can perform various things on file including read , write and append //



#include<stdio.h>
#include<conio.h>


int main()

{

FILE *ptr = NULL; // created a file pointer // // initialize it to null //
char string[64] = "This content was produced by Files.c";

//******* writing the file ********* //

// ptr = fopen("myfile.txt" , "w");
// fprintf(ptr , "%s" , string);

// ******** Appending the file content ********* //

ptr = fopen("myfile.txt" , "a");  // This will append the strings given by us in the file content //
fprintf(ptr , "%s" , string);



// ******* reading the file ********* //

// ptr = fopen("myfile.txt" , "r");  // Reading the file // 
// fscanf(ptr , "%s"  , string);  // used for accessiing the content in the file //
// printf("The content of this file has %s\n" , string);
return 0;

}
