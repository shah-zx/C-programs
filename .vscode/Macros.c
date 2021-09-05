


// Here we will learn about the macros which are pre defined //

#include<stdio.h>
#include<conio.h>

int main()

{

printf("File name is :- %s\n" , __FILE__  );  // Using the file macros which will give the name of file //
printf("Todays date is :- %s\n" , __DATE__); // using the date macros which will give the date.
printf("The time now is :-%s\n " , __TIME__); // using the time macros which will give the date.
printf("The line number is :- %d\n" , __LINE__); // using the line macros which will give the date.
printf("ANSI :- %d" , __STDC__); 
return 0;



}



