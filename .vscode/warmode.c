#include <stdio.h>
#include <conio.h>

// Here we will see the the w+ , r+ and the a+  modes of openig the file in which we read , write and append the content in the file.  //

int main()

{
    // Firstly w+ mode //  // write as well as read //

    FILE *ptr;
    // char str[34] = "shahnawaz sayyed";
    // ptr = fopen("test.txt" , "w+");   // First it will clear all the content of the file and then it will read the given string in the output //
    // fscanf(ptr , "%s" , str );
    // printf("The thing we read from the file is :- %s" , str);

    // Second r+ mode // // read as well as write //

    // char string[34] = "It is very beautiful"; // This caharcter string will be containing the string we will be reading from the file. //
    // ptr = fopen("test.txt" , "r+");
    // fprintf(ptr , "%s" , string);
    // fscanf(ptr , "%s" , string);
    // printf("We read these things from the file :- %s"  , string);

    // Third a+ mode //  // This will append and then read the file content //

    ptr = fopen("test.txt", "a+");
    char st[120] = "Dear_students_All_must_attend_Unit_Test_2_which_is_MCQ_and_survey_based_of_Software_Engineering_using_this_link.";
    fprintf(ptr , "%s" , st);
    // fscanf(ptr , "%s" , st);
    // printf("The content we read is :- %s", st);


    

}





