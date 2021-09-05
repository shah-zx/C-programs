#include <stdio.h>
#include <conio.h>

struct Bitfields
{
    unsigned int a : 3;
    unsigned int b : 4;

} b1;

int main()

{
    
    b1.a = 2;
    b1.b = 3 ;
    printf("The value of a is :- %u\n", b1.a);
    printf("The value of b is :- %u\n", b1.b);
    printf("Size of b1 :- %d" , sizeof(b1));

}





