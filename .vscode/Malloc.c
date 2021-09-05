#include <stdio.h>
#include <conio.h>
#include <alloc.h>
#include<stdlib.h>

int main()

{

    int *ptr , i;
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
}
