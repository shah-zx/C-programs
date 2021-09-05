

// Here we will learn about structure which are user defined data types //

// Here we have made a program using student structure and defined some members in it like :- name , number  , name1 and character //

#include <stdio.h>
#include <conio.h>
#include <string.h>
// struct student
// {
//     char name;
//     float number;
//     char name1[34];
//     char character;

// }; // Here we can also do it as :-  Rahul , hamza , shahnawaz; // // For defining //

// struct book
// {
//     char front[20];
//     int pages;
//     int cost;
// };

// struct disk
// {

//     char co[20];
//     int space;
//     int speed;
// };


    struct car 

    {
      int hour;
      int minute;
      int second;
    
    };

    struct t

    {
      char name;
      struct car c1;
      struct car c2;

    };


int main()

{

    // struct student s1, s2, s3;
    // s1.number = 78.90;
    // s1.character = 'A';
    // s2.name = "Hamza";
    // s2.number = 85.60;
    // s2.character = 'A';
    // s3.name = "Rahul";
    // s3.
    // number = 64.59;
    // s3.character = 'B';
    // strcpy(s1.name1 ,  "Shahnawaz is a good guy.");
    // printf("Hamza got %d marks", s2.number);
    // printf("shahnawaz got %d marks", s1.number);
    // printf("Rahul got %d marks", s3.number);

    // struct student s;
    // s.character = 'A';
    // s.number = 86;
    // s.name = "Hamza";
    // printf("The size of number is :- %d\n" , sizeof(s.number));
    // printf("The size of character is :- %d\n" , sizeof(s.character));
    // printf("The size of name is :- %d\n" , sizeof(s.name));
    // printf("The size of name1 is :- %d\n" , sizeof(s.name1));
    // printf("The size of total bytes :- %d" , sizeof(s));

    // A program for defining the structure and initialize its members //

    // struct book bk1 = {"Programming in c", 600, 900};
    // printf("The name of the book is :- %s\n", bk1.front);
    // printf("The cost of the book is :- %d\n", bk1.cost);
    // printf("The pages of the book is :- %d\n", bk1.pages);

    // A program for copying the members and their variables from one object to other object //

    // struct disk d1 = {"Panasonic" , 456 , 500};
    // struct disk d1, d2, d3;
    // strcpy(d2.co , d1.co); // This is a string so we copied it using strcpy //
    // d2.space = d1.space;
    // d2.speed = d1.speed;
    // d3  = d2 = d1;
    // printf("The properties of one are :- %s , %d , %d\n"  , d1.co , d1.space , d1.speed);
    // printf("The properties of disk two are :- %s , %d , %d\n"  , d2.co , d2.space , d2.speed);
    // printf("The properties of disk three are :- %s , %d , %d\n"  , d3.co , d3.space , d3.speed);

    // A program for taking the values of variables and passing them to structures //

    // printf("Enter the properties of disk 1 :- ");
    // scanf("%s  %d  %d", &d1.co, &d1.space, &d1.speed);
    // printf("Enter the properties of disk 2 :- ");
    // scanf("%s  %d  %d", &d2.co, &d2.space, &d2.speed);
    // printf("Enter the properties of disk 3 :- ");
    // scanf("%s  %d  %d", &d3.co, &d3.space, &d3.speed);
    // printf("The properties of disk 1 :- %s , %d , %d\n" , d1.co , d1.space , d1.speed);
    // printf("The properties of disk 1 :- %s , %d , %d\n" , d2.co , d2.space , d2.speed);
    // printf("The properties of disk 1 :- %s , %d , %d\n" , d3.co , d3.space , d3.speed);

    // A program to display the car number  , starting time and reaching time. Use the structure within the structure //

     
     struct t ob;
     
     printf("Enter the name  ,  starting time and the reaching time of car :- ");
     scanf("%s" , &ob.name);
     scanf("%d %d %d" , &ob.c1.hour , &ob.c1.minute , &ob.c1.second);
     scanf("%d %d %d" , &ob.c2.hour , &ob.c2.minute , &ob.c2.second);
     printf("%s" ,  ob.name );
     printf(" %d , %d , %d\n" , ob.c1.hour , ob.c1.minute , ob.c1.second);
     printf(" %d , %d , %d" , ob.c2.hour , ob.c2.minute , ob.c2.second);



}



    
      