#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include<stdlib.h>

int main()

{

    int *ptr , i , n;
    printf("Enter the size of the array you want to create :- ");
    scanf("%d" ,&n);
    ptr = (int *)malloc(3*sizeof(int));
    for ( i = 0; i < 3; i++)
    {
        printf("Enter the number %d :-" , i);
        scanf("%d", &ptr[i]);
    }
    for ( i = 0; i < 3; i++)
    {
        printf("The number is :- %d\n" , ptr[i]);
    }
    printf("Enter the size of the array you want to create :- ");
    scanf("%d" , &n);
    
    ptr = (int *)realloc(ptr  , n*sizeof(int));
    for ( i = 0; i < n; i++)
    {
        printf("Enter the value of  %d of this array :-" , i);
        scanf("%d", &ptr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("The new value at %d is %d" ,  i , ptr[i]);
    }


}
