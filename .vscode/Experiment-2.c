

#include <stdio.h>
#include <conio.h>

// In this program we will wrte a code for union of two sets //

// Functions part //

int printarray(int arr1[], int arr2[], int, int);

// Function part end //

int main()

{

    // Initializing the two arrays //

    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {2, 3, 4, 5};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
    // Calling the driver function //

    printarray(arr1, arr2, m, n);
    getchar();
    return 0;
}

int printarray(int arr1[], int arr2[], int m, int n)
{

    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
        {
            printf("%d", arr1[i++]);
        }
        else if (arr2[j] > arr1[i])
        {
            printf("%d", arr2[j++]);
        }
        else
        {
            printf("%d", arr2[j++]);
            i++;
        }

        // Code for remaining value in any of the arrays to be printed //

        while (i < m)
        {
            printf("%d", arr1[i++]);
        }
        while (j < n)
        {
            printf("%d", arr2[j++]);
        }
        
    }