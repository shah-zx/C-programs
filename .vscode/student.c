#include <stdio.h>
#include <conio.h>

// Here we will make a program  which will transfer the student's data fornm one file to other :- //

struct student
{
    char name[30];
    int marks;
    int age;
    char gender[20];

} stud;

int main()

{
    FILE *ptr;
    // char str[40];
    ptr = fopen("studentfile.txt", "rb");
    if (ptr == NULL)

    {
        printf("Error : file not found");
    }

    else

     {
        // printf("enter the name of the student :-");
        // scanf("%s", &stud.name);
        // printf("Enter the marks of the student :- ");
        // scanf("%d", &stud.marks);
        // printf("Enter the age of the student :- ");
        // scanf("%s", &stud.age);
        // printf("Enter the gender of the student :- ");
        // scanf("%s", &stud.gender);
        // fwrite(&stud, sizeof(struct student), 1, ptr);
        // printf("Your data is stored successfully.");

        fread(&stud , sizeof(struct student) , 1 , ptr);
        printf("name is :- %s\n" , stud.name);
        printf("marks are :- %d\n" , stud.marks);
        printf("age is :- %d\n" , stud.age);
        printf("gender is :- %s\n" , stud.gender);

        fclose(ptr);
    }

    // fread(stud , sizeof(stud) , 5 , ptr);
    // printf("The objects i read is :- %s" , stud);
}
