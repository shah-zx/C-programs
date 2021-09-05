#include <stdio.h>
#include <conio.h>

// First structure //

// struct time
// {
//     int hours;
//     int minute;
//     int second;
// };

// second structure //

// struct values
// {

//     int carno;
//     struct time st;
//     struct time re;
// };

// int main()

// {

//     struct values po;
//     printf("Enter the name of car  ,  starting time and reaching time :- ");
//     scanf("%d" , &po.carno);
//     scanf("%d %d %d", &po.st.hours, &po.st.minute, &po.st.second);
//     scanf("%d %d %d ", &po.re.hours, &po.re.minute, &po.re.second);
//     printf("car no. :- %d\n" , po.carno);
//     printf("Starting time :- hours : %d: \t minutes : %d: \t seconds : %d\n",  po.st.hours, po.st.minute, po.st.second);
//     printf("Reaching time :- hours :%d: \t minutes : %d: \t seconds : %d",  po.re.hours, po.re.minute, po.re.second);

// A program for printing the names ,  roll numbrers and grades of students using structures //

// Structure for the student //

// struct student
// {

//     char name[40];
//     int roll;
//     char grade[5];
// };

// struct book

// {

//     char name[20];
//     int pages;
//     int cost;
// };

struct boy

{

    char name;
    int age;
    int weight;
    char hobby;
};

int main()

{

    struct boy b;
    struct boy *pt;
    pt = &b;

    printf("Enter the name of the boy :- \n");
    printf("Enter the age of the boy :- \n");
    printf("Enter the weight of the boy :- \n");
    printf("Enter the hobby of the boy :- \n");
    scanf("%s", &b.name);
    scanf("%d", &b.age);
    scanf("%d", &b.weight);
    scanf("%s", &b.hobby);
    printf(" %s , %d ,  %d   , %s \n", b.name, b.age, b.weight, b.hobby);
    printf("Printing the information of the boy through the help of the pointer :- ");
    printf(" %s  , %d , %d  ,  %s \n", pt->name, pt->age, pt->weight, pt->hobby);

    // Strucutures and pointers //

    // struct book b1;
    // struct book *ptr;
    // ptr = &b1;
    // printf("Enter the name of the book :- \n");
    // printf("Enter the pages of the book :- \n");
    // printf("Enter tha cost of the book :- ");
    // scanf("%s", &b1.name);
    // scanf("%d", &b1.pages);
    // scanf("%d", &b1.cost);

    // printf("Printing the values of book using normal object :-\n");
    // printf("%s ,%d , %d\n", b1.name, b1.pages, b1.cost);
    // printf("printing the values of the book using pointer :- \n");
    // printf("%s , %d , %d", ptr->name, ptr->pages, ptr->cost);

    // One more program for using structures and pointers :- //

    // struct student s[3];
    // int i;

    // printf("Enter the name of student\n ");
    // printf("Enter the roll no. of student\n ");
    // printf("Enter the grade of student ");

    // for (i = 0; i < 3; i++)
    // {
    //     scanf("%s", &s[i].name);
    //     scanf("%d", &s[i].roll);
    //     scanf("%s", &s[i].grade);
    // }
    // printf("The details of the students are :- \n");
    // for (i = 0; i < 3; i++)
    // {
    //     printf("Details of student %d is :-  Name :- %s, Roll no. :-  %d , Grade :-  %s\n", i, s[i].name, s[i].roll, s[i].grade);
    // }
}
