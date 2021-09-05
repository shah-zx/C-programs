
// Here we will learn about double pointer in c which is a pointer that stores the value of another pouinter //

#include<stdio.h>
#include<conio.h>

int main()


{

// int a  = 40;
// int *p;
// int **r;
// p = &a;
// r = &p;

// printf("The value of a through p pointer is :- %d\n" , *p);
// printf("The value of through r pointer is :- %d\n" , **r);
// printf("The value of a through a is :- %d" , a);
// printf("The address of p is :- %u\n" , &p);
// printf("The address of a r is :- %u\n" , &r);
// printf("The address of a  is :- %u" , &a);


// A program for using different levels of pointer to pointer and display the elements //

int k;
int a[4] = {1,2,3,4};
int *b[4];
int **c[4];
int ***d[4];
int ****e[4];
int *****f[4];

for (int  k = 0; k < 3; k++)
{
    b[k] = a + k;
    c[k] = b + k;
    d[k] = c + k;
    e[k] = d + k;
    f[k] = e + k;
    

}


for (int k = 0; k < 4; k++)
{
    printf("%d\n" , *b[k]);
    printf("%d\n" , **c[k]);
    printf("%d\n" , ***d[k]);
    printf("%d\n" , ****e[k]);
    printf("%d" , *****f[k]);
    
}

}

