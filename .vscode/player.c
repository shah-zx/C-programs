#include <stdio.h>
#include <conio.h>

struct player
{
    char name[45];
    int age;
    int runs;
} pl;

int main()

{

    FILE *ptr;
    ptr = fopen("playerinfo.txt", "rb");
    fread(&pl , sizeof(struct player) , 1 , ptr );
    printf("The name of the player is :- %s\n" , pl.name);
    printf("The age of the player is :- %d\n" , pl.age);
    printf("The runs of the player is :- %d\n " , pl.runs);

    

    // fread(&pl , sizeof(struct player) , 1 , ptr);

    // if (ptr == NULL)
    // {
    //     printf("Error : file not found");
    // }
    // else
    // {

    //     printf("Enter the name of the player :-");
    //     scanf("%s", &pl.name);
    //     printf("Enter the age of the student :- ");
    //     scanf("%d", &pl.age);
    //     printf("Enter the runs of the student :- ");
    //     scanf("%d", &pl.runs);
    //     fwrite(&pl, sizeof(struct player), 1, ptr);
    //     printf("Your data is successfully stored.");
    //     fclose(ptr);

    // }
}

