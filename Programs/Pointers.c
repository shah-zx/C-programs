// here we will learn about pointers //

#include <stdio.h>
#include <conio.h>

int main()

{

    // int i=1;
    // float f=2.3;
    // char c='A';

    // printf("The value and address of integer variable is :- %d , %u\n" , i , &i);
    // printf("The value and address of integer variable is :- %f , %u\n" , f , &f);
    // printf("The value and address of integer variable is :- %c , %u" , c , &c);

    // Here we printed the values  and addresess of different variabe and data types //

    // A programm to show pointer of any data type that occupies the same space //

    // printf("The character pointer takes  %d of size and %u size\n" , sizeof(char) , sizeof(char*));
    // printf("The integer pointer takes  %d of size and %u size\n" , sizeof(int) , sizeof(int*));
    // printf("The float pointer takes  %d of size and %u size" , sizeof(float) , sizeof(float*));

    // To display the value of variables and its locations using pointers :-

    // int v=10,*p;
    // p=&v;
    // printf("The value of v is %d\n" , *p);
    // printf("The address of v is %u\n" , p);
    // printf("The address of p is %u\n" , &p);
    // printf("%u" , &v);

    // Acessing  Value of variables  by different pointer methods //

    // int *c;
    // int a=12;
    // c = &a;
    // printf("The values are :- a = %d , a = %d , a = %d" , a , *(&a) , *c);

    // A program for printing an element and its address using pointer :-

    // int num , *p;
    // printf("Enter the element for fimding its address and value :- ");
    // scanf("%d" , num);
    // p = &num;
    // printf("The address  of the variable is:- %u" , p );
    // printf("The value of the element is %d" , num);

    // A program for adding two numbers through variables and thier pointers //

    // int num1, num2, *ptr1, *ptr2, add;
    // printf("Enter number one :-");
    // scanf("%d", &num1);
    // printf("Enter number two :-");
    // scanf("%d", &num2);
    // ptr1 = &num1;
    // ptr2 = &num2;
    // add = *ptr1 + *ptr2;
    // printf("The addition of the numbers is :- %d", add);

    //  A program for assigning the pointer value to other value :- //

    // int var1=2 , var2 , *ptr;
    // ptr = &var1;
    // var2 = *ptr;
    // printf("The value of var1 is :- %d\n" , var2);
    // printf("The adress of var1 is %u" , &var2);
    // printf("The address of var1 is :- %u" , &var1);

    // A program to assign the value of b to a through pointers. Show the effect of addtion before and after the assignment of the value of "b" to "a" //
    int a, b, c, d, add, *ptra, *ptrb;
    printf("Enter the value of a");
    scanf("%d", &a);
    printf("Enter the value of b");
    scanf("%d", &b);
    ptra = &a;
    ptrb = &b;
    add = *ptra + *ptrb;
    printf("The addition of the values are :- %d", add);
    *ptra = *ptrb; 
    printf("The addition of the values are :- %d", *ptra+*ptrb);
}
