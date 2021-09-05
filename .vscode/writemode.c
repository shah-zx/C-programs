#include <stdio.h>
#include <conio.h>

int main()

{

    FILE *ptr;
    char fname[20];
    char ch;

    printf("Enter the name of the file you want to open :- ");
    scanf("%s", &fname);
    ptr = fopen(fname, "r");
    fscanf(ptr , "%c" , &ch);
    printf("The content we got :- %c" , ch);
    // printf("Write some content and press Z to stop");
    // fflush(stdin);
    // scanf("%c", &ch);
    // while (ch != 'Z')
    // {
    //     fprintf(ptr, "%c", ch);
    //     scanf("%c", &ch);
    // }
    fclose(ptr);
    return 0;
}
