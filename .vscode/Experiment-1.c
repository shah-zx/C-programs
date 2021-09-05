// This program is for performing the bitwise operations like :- and , or , not  , left shift and right shift //

#include <stdio.h>
#include <conio.h>

int main()
{

    int a, b;
    printf("Enter the values of a and b");
    scanf("%d %d", &a, &b);

    printf("The bitwise and operation between a and b is :- %d\n", a & b);

    printf("The bitwise or operation between a and b is :- %d\n", a | b);

    printf("The bitwise not operation between a and b is :- %d\n", ~a);

    printf("The bitwise XOR operation between a and b is :- %d\n", a ^ b);

    printf("The left shift and the right shift of a and b are :- %d , %d" , a<<1 , b>>2);

}