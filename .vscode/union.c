// Here we will be learning about union in c programming //

// Unions work same as that of structures but they are very precise at memory allocation //

// Lets code //

#include <stdio.h>
#include <conio.h>

union student
{
    char name;
    float number;
    char name1[34];
    char character;
};   // Here we can also do it as :-  Rahul , hamza , shahnawaz; // // For defining //

struct performance
{
  int data;
  union student perf;
} stud;

int main()

{

    union student s1, s2, s3;
    s1.number = 78.90;
    s1.character = 'A';
    s2.name = "Hamza";
    s2.number = 85.60;
    s2.character = 'A';
    s3.name = "Rahul";
    s3.number = 64.59;
    s3.character = 'B';
    strcpy(s1.name1 ,  "Shahnawaz is a good guy.");
    printf("Hamza got %d marks", s2.number);
    printf("shahnawaz got %d marks", s1.number);
    printf("Rahul got %d marks", s3.number);
    printf("The size of union is :- %d\n" , sizeof(stud.perf));
    printf("The size of structure is :- %d\n" , sizeof(stud));
    
    
}

