#include <stdio.h>
#include <conio.h>

struct vehicle
{
    char name;
    int cylinders;
    int seats;

} car;

int main()

{

    FILE *ptr;
    // char string[45];

    ptr = fopen("yesnofile.txt", "rb");
    fread(&car, sizeof(struct vehicle), 1, ptr);
    printf("The name of the vehicle :- %s\n" , car.name);
    printf("The no.of cylinders are :- %d\n" , car.cylinders);
    printf("The no.of seats are :- %d\n" , car.seats);
    

    // printf("Enter the name :- ");
    // scanf("%s" , &car.name);
    // printf("Enter the cylinders :- ");
    // scanf("%d" , &car.cylinders);
    // printf("Enter the seats :- ");
    // scanf("%d" , &car.seats);

    // fwrite(&car , sizeof(struct vehicle)  , 1 , ptr);
    // printf("Your data is stored successfully ");

   
}
