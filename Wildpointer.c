#include<stdio.h>
#include<conio.h>

int main()

{


int a = 10;
int *ptr;   // now this is a wild pointer as it can point to any arbitrary location in the memory //
ptr = &a;   // Now it is not a wild pointer //
printf("%u" , *ptr);

 
}