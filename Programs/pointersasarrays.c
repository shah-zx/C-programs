

// Here we will create array of pointers. as we know that array can be of elements of similar data type. so here we will create arrays of pointer type //

#include<stdio.h>
#include<conio.h>

int main()


{

// int array[] = {1,2,3,4,5,6};
// int i;
// int *ptr[6];
// for (int i = 0; i < 6; i++)
// ptr[i] = array +i;

// for (int i = 0; i < 6; i++)
// {
//     printf("The vaue is :- %d\n" , *(ptr[i]));
//     printf("The address is :- %u\n" , ptr[i]);
// 



int array1[9] = {1,2,3,4,5,6,7,8,9};
int  i;
int *ptr1[9];
for (int i = 0; i < 9; i++)
ptr1[i] = array1 + i;
for (int  i = 0; i < 9; i++)

{
    printf("The value of the elements is :- %d\n" , *ptr1[i]);
    printf("The address of the elements is :- %u\n" , ptr1[i]);
    printf("The address of the pointer is :- %d\n" , &ptr1[i]);
}


}




