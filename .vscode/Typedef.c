#include <stdio.h>
#include <conio.h>

// # define H 60
// typedef int hrs;   // usimg typedef we  changed the int to hrs //

// typedef char string[45];

typedef struct //  Here using typedef we renamed the structure data type with info //

{
    char name[45];
    char gender[45];
    int acno;

} info;

int main()

{

    // hrs  hours  = 2;
    // printf("The number of hours is :- %d hours\n" , hours);
    // printf("The minutes are :- %d minutes\n " , hours*H);
    // printf("The seconds are :- %d seconds\n" , hours*H*H);

    // A program for making string data type :- //

    // string a = "Shahnawaz" , b;
    // printf("The first string is :- %s\n" , a);
    // printf("Enter the second string :- ");
    // gets(b);
    // printf("The second string is :- %s" , b);

    // A program for creating a user defined data type structure and printing them :- //

    info e[2];

    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of the employee %d :- ", i);
        scanf("%s", &e[i].name);
        printf("Enter the gender of the employee %d :- ", i);
        scanf("%s", &e[i].gender);
        printf("Enter the accno. of the employee  %d:-", i);
        scanf("%d", &e[i].acno);
    }

    for (int i = 0; i < 2; i++)
    {

        printf("The name of the employee is :- %s\n", e[i].name);
        printf("The gender of the employee is :- %s\n", e[i].gender);
        printf("The accno. of the employee is :- %d\n", e[i].acno);
    }








}
