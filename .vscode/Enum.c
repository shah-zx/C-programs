

// Here we will learn about enumerated data type :- which is same as structure and union.

#include <stdio.h>
#include <conio.h>

enum books
{
    programming,
    android,
    data_science,
    machine_learning
};

int main()

{

    // Here qwe will access the elements of the books :-

    printf("%d\n", programming);
    printf("%d\n", android);
    printf("%d\n", data_science);
    printf("%d\n", machine_learning);

}

