#include <stdio.h>
#include <conio.h>

int main()

{

    FILE *ptr = NULL;
    char string[34] = "This is me ";
    ptr = fopen("test.txt", "w+");

    // For writing :- //

    fprintf(ptr, "%s", string);


    // This is for reading :-

    // fscanf(ptr , "%s" , string);
    // printf("The content in this file are :- %s" , string);


}
