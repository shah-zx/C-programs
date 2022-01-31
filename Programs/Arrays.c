#include <stdio.h>
#include <conio.h>

int main()
{
    // Declaration of the array //   // Dynamic initialization of the array. //
    int array[4];

    // This is procedure one for printing the elements of arrays . //

    // array[0] = 1;
    // array[1] = 2;
    // array[2] = 3;
    // array[3] = 4;
    // printf("Array one is :- %d\n ", array[0]);
    // printf("Array two is :- %d\n ", array[1]);
    // printf("Array three is :- %d\n ", array[2]);
    // printf("Array four is :- %d\n", array[3]);

    // This will be procedure second in which user will dynamically provide the array elements to be printed //

    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the %d element of the array ", i);
    //     scanf("%d", &array[i]);
    // }
    //  for (int i = 0; i < 4; i++)
    // {
    //     printf("The element %d is %d \n", i , array[i]);
        
    // }

    // The above was a 1 D array.

    // Static initialization of the array :-

    int marks[4] = {34,40,35,36};

     for (int i = 0; i < 4; i++)
    {
        printf("The element %d is %d \n", i , marks[i]);
        
    }

    // Declaration with initialization
}
