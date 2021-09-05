#include <stdio.h>
#include <conio.h>

// struct boy

// {

//     char *name;
//     int *age;
// };


// A program for accessing the elements of the structure using normaal pointer //

int *ptr;

struct number
{
    int num1;
    int num2;
    int num3;
};

int main()

{

    struct number no;

    no.num1 = 2;
    no.num2 = 3;
    no.num3 = 4;

    ptr = &no.num1;

    printf("The number one is :- %d\n" , *ptr);
    printf("The number two is :- %d\n" , *ptr+1);
    printf("The number three is :- %d\n" , *ptr+2);


    // struct boy b;
    // struct boy *pt;

    // char nm[30] = "shahnawaz";
    // int ag = 19;

    // pt = &b;
    // b.name = nm;
    // b.age = ag;

    // printf("The name of the student is :- %s\n ", pt->name);
    // printf("The age of the student is :- %d", pt->age);
}



