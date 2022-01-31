
// Here we will use the various data type conversions of strings :-

// String to double :-
// String to int :-
// String to float :-
// Separating character data and float data from  the string //
// Seperating char , long and int data from a string  //

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

int main()

 {
//     double d;
//     int i;
//     float f;
//     d = atof("112.45673"); // atof function , Here d is containing a string value //
//     i = atoi("120.980");   // atoi function
//     f = atoi("56.7884532"); // atoi function
//     printf("The conversion of string 112.45673 is %lf\n", d);
//     printf("The conversion of string 112.45673 is %d\n", i);
//     printf("The conversion of string 112.45673 is %f\n", f);
//     getche();



// Now we will see how to seperate string and float values :- //

// char *string = "12.2 is the interest rate.";
// char *stp;
// long d;
// d = strtod(string , &stp);
// printf("The value of numerical is :- %lf" ,d);
// printf("%s" , stp);


// char *str = "kamlesh";
// printf("%u,%s" , &str , str);


// Now we will see some memory functions :-
 // memcpy()
 // memove()
 // memchr()
 // memcmp()


 // memcpy()

//  char *str = "Mukesh";
//  char arr[20];
//  printf("The value of str is :- ");
//  memcpy(arr , str ,20);
//  printf("%s" , arr);



// memove() 

// char str[] = "Good very good";
// printf("%s" , str);
 
 
 

// memcmp()

char w[] = "a";
char n[] = "A";
printf("%d" , memcmp(w,n,2));

return 0 ;



 }