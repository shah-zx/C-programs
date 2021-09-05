#include<stdio.h>
#include<conio.h>


// Here we will see the various binary modes //


int main()
{

// The wb mode :- //
// Used to write in the  file //

FILE *ptr;
// ptr = fopen("test.txt" , "wb");
char str[90] = "shahnawaz_sayyed_is_a_good_boy_with_nice_knowledge.";
// fwrite(str , sizeof(str), 34 , ptr);

// The rb mode :- //
// Used to read the content of the file //

// ptr = fopen("test.txt" , "rb");
// fread(str , sizeof(str) , 45 , ptr);
// printf("The content i read from the file is :- %s" , str);

// ab mode :- append mode :- //

ptr  = fopen("test.txt" , "ab");
fwrite(str , sizeof(str) , 90, ptr);

}


