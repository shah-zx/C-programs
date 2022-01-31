
// Program for printing the size and the location for array elements for different data types //


#include<stdio.h>
#include<conio.h>

int main()

{
short int a[10];
char c[10];
long d[10];
printf("The bytes of memory required for int type for 10 elements is %d\n",sizeof(short int));
printf("The bytes of memory required for char type for 10 elements is %d\n",sizeof(char));
printf("The bytes of memory required for float type for 10 elements is %d\n",sizeof(float));
printf("*****************************************************\n");
printf("The memory reserved for 10 int elements are :- %d\n",sizeof(a));
printf("The memory reserved for 10 char elements are :- %d\n",sizeof(c));
printf("The memory reserved for 10 float elements are :- %d\n",sizeof(d));
printf("*****************************************************");
}
               // memory in bytes alloted :- number of elements * size of bytes. //
