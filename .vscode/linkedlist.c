#include<stdio.h>
#include<conio.h>


struct node
{
    int n;
    struct node *ptr;
};





int main()
{
struct node item0 , item1 , item2 , item3;
item3.n = 1;
item3.ptr = NULL;
item2.n = 2;
item2.ptr = &item1.n;
item1.n = 3;
item1.ptr = &item2.n;
item0.n = 5;
item0.ptr = &item3.n;

printf("%d" , item3.n);
printf("%d" , *item1.ptr);
printf("%d" ,*item2.ptr );
printf("%d" , item0.n);

int a  = 34;
int b = 43;

}