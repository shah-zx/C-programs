#include <stdio.h>
#include <conio.h>

int sqr(int);

int main()

{

    int a = 4, s;
    s = sqr(a);
    printf("The square of the number is :- %d", s);
}

int sqr(int a)
{
    return (a * a);
}
