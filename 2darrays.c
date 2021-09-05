#include<stdio.h>
#include<conio.h>

int main()

{

// int arr[5] = {1,2,3,4,5};
// float arr1[7] = {1.2,3.2,4.5,6.7,8.4};
// int *p ;
// p = arr;
// float *d;
// d = arr1;

// printf("The values are :- ");
// printf("[%d] , %u\n" , *p ,p);
// printf("[%d] , %u\n" , *(p+1) ,p+1);
// printf("[%d] , %u\n" , *(p+2) ,p+2);
// printf("[%d] , %u\n" , *(p+3) ,p+3);
// printf("[%d] , %u\n" , *(p+4) ,p+4);

// printf("The values of flota are :- ");
// printf("[%f] , %u\n" , *d ,d);
// printf("[%f] , %u\n" , *(d+1) ,d+1);
// printf("[%f] , %u\n" , *(d+2) ,d+2);
// printf("[%f] , %u\n" , *(d+3) ,d+3);
// printf("[%f] , %u" , *(d+4) ,d+4);

// Now creating two dimensional array :- //

 int arr2[3][3] = {1,2,3,4,5,6,7,8,9} , j=1 , i;
 int *ptr;
 ptr = &arr2[0][0];
 printf("The values of the two dimensional array are :-\n ");
 for (int i = 0; i < 9; i++ , j++)
 {
     printf("[%d]\t , %u\t" , *ptr , ptr);
     ptr++;
     if (j==3)
     {
        printf("\n");
        j=0;
     }

     
 }
 

}

