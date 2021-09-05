
// Here we will see how a string can be created //

// It is defined as null terminated character array //

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()

{
    // // 1> //
    // char string1[] = {'s','h','a','n','u','\0'};
    // // 2> //
    // char string2[] = "shahnawaz";
    // // 3> //
    // char string3[8] = {{'h'},{'a'},{'m'},{'z'},{'a'}};

    // // printing them //

    // printf("%s\n" , string1);
    // printf("%s\n",string2);
    // printf("%s\n" , string3);

    // Printing these values by using the while loop :- //

    // char arr1[] = "Have a great day";
    // int i=0;
    // while (i<20)
    // {
    //      printf("%c" , arr1[i]);
    //      i++;
    // }

    // Printing the values using for loop :-

    // char arr2[] = "Great coding going on";
    // int i;
    // for (int i = 0; i < 25; i++)
    // {
    //     printf("%c",arr2[i]);
    // }

    // Using differnt formats for displaying the strings //

    // char name1[] = "shahnawaz";
    // printf("%.5s\n",name1);
    // printf("%.3s\n",name1);
    // printf("%.7s\n",name1);
    // printf("%-10.2s",name1);

    // Printing the string considering the null character also.

    //     char name4[] = {'e','x','c','e','l','l','e','n','t','\0'};
    //     int i = 0;
    //     while (i<20)
    //     {
    //         if (name4[i]!=0)
    //         {
    //             printf("%c",name4[i]);
    //             i++;
    //         }

    //     }

    // }

    // Taking a string from the user and printing it :-

    // char str[34];
    // int i;
    // printf("Enter the string");
    // gets(str);
    // printf("Your string is %s",str);

    // String standard function //

    // Strlen function:- lenght
    // Strcat function:- concatenate
    // Strrev function:- reverse
    // Strcpy function:- copies
    // Strcmp function:- compares two strings.

    // prints the lenght of the string :-

    // The Strlen function :-
    // char str[50];
    // int len , i;
    //  printf("Enter the string");
    //  gets(str);
    //  printf("Your string is %s\n",str);
    //  len = strlen(str);
    //  printf("The length of the string is :- %d" , len);
    //  for (int i = 0; i < len; i++)
    //  {
    //      printf("%c , %d", str[i] , str[i]);
    //  }

    //  // The strcat and strrev function :-

    // char s1[] = "good";
    // char s2[] = "day";
    // char s3[54];
    // puts(strcat(s1,s2));
    // printf("The length of the string is :- %d\n" , strlen(s1));
    // printf("The reversed string s1 is :- ");
    // puts(strrev(s1));
    // strcpy( s3 , strcat(s1 , s2));
    // puts(s3);

    // The strcmp function :-

    // printf("The strcmp for s1 , s2 returned %d " , strcmp(s1 , s2));
    // return 0;

    // A program for strcpy function :-

    // char nm1[24];
    // char nm2[24];
    // printf("Enter your first string :-");
    // gets(nm1);
    // printf("Enter your second string :-");
    // gets(nm2);
    // strcpy(nm1 , nm2);
    // printf("The string after copying second into first is :- %s" , nm1);

    // A program for strcnpy function :-

    // char nm1[24];
    // char nm2[24];
    // int n;
    // printf("Enter your first string :-");
    // gets(nm1);
    // printf("Enter your second string :-");
    // gets(nm2);
    // printf("Enter the number of characters to be copied into the first string :- ");
    // scanf("%d", &n);
    // strncpy(nm1, nm2, n);
    // printf("The string after copying second into first is :- %s", nm1);

    // A program for stricmp function :-

    // char nm1[24];
    // char nm2[24];
    // int n;
    // printf("Enter your first string :-");
    // gets(nm1);
    // printf("Enter your second string :-");
    // gets(nm2);
    // n = stricmp(nm1, nm2);
    // if (n == 0)
    //     printf("The strings are identical");
    // else
    //     printf("The strings are not identical");

    // A program //

    // int unit[50];
    // int i;

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("What is the unit of traffic ? ");
    //     scanf("%s", unit);
    //     if (stricmp(unit, "Earlang") == 0)
    //     {
    //         printf("right");
    //         exit(1);
    //     }
    //     else if (i < 3)
    //         printf("Try again!\n");
    // }

    // printf("The unit of traffic is Earlang");

    //  Strrncmp function :-

    // int a, b;
    // char nm1[24];
    // char nm2[24];

    // printf("Enter your first string :-");
    // gets(nm1);
    // printf("Enter your second string :-");
    // gets(nm2);
    // printf("Enter the number of characters to be compared into the first string :- ");
    // scanf("%d", &a);
    // b = strncmp(nm1, nm2, a);
    // if (b == 0)
    // {
    //     printf("The strings are identical upto %d characters", a);
    // }
    // else
    //     printf("The strings are not identical upto %d characters ", a);

    // getche();

    // Strdup function :-

    // char txt[24];
    // char *txt2;
    // printf("Enter the string :-");
    // scanf("%s", &txt2);

    // txt2 = strdup(txt);
    // printf("The string is :- %s", txt2);

    // Strcat function :-

    // char nme1[50];
    // char nme2[50];
    // printf("Enter the first string :- ");
    // gets(nme1);
    // printf("Enter th second string :-");
    // gets(nme2);
    // strcat(nme1, nme2);
    // printf("%s" , nme1);

    // Strncat function :-

    // char nme1[50] , nme2[50];
    // int n;

    // printf("Enter the first string :- ");
    // gets(nme1);
    // printf("Enter th second string :-");
    // gets(nme2);
    // printf("Enter the number of characters to be appended :-");
    // scanf("%d" , &n);
    // strncat(nme1, nme2 , n);
    // printf("%s" , nme1);

    // Strrev function :-

    // char arr1[24];
    // printf("Enter the first string :- ");
    // gets(arr1);
    // printf("The reverse of string one is :- %s" , strrev(arr1));

    // Strset function :-

    // char arr3[24];
    // char symbol;
    // printf("Enter the string :-");
    // gets(arr3);
    // printf("Enter the symbols :- ");
    // scanf("%c", &symbol);
    // strset(arr3, symbol);
    // printf("The value of string after setting of symbol is :- %s", arr3);

    // Strnset function :- 



    // char arr3[24];
    // char symbol;
    // int n;
    // printf("Enter the string :-");
    // gets(arr3);
    // printf("Enter the symbols :- ");
    // scanf("%c", &symbol);
    // printf("Enter the number of characters to replace :- ");
    // scanf("%d" , &n);
    // strnset(arr3, symbol,n);
    // printf("The value of string after setting of symbol is :- %s", arr3);


    // Strspn function :-
    //  char nme1[50] , nme2[50];
    //  int len;
    //  printf("Enter the first string :- ");
    //  gets(nme1);
    //  printf("Enter th second string :-");
    //  gets(nme2);
    //  len = strspn(nme1 , nme2);
    //  printf("The position from which the string is not mathching is :- %d" , len );

    // Strpbrk function :-

    // char new[24];
    // char old[20];
    // char *ptr;
    // printf("Enter the string  :- ");
    // gets(new);
    // printf("Enter the character to find string from :- ");
    // scanf("%c" , &old);
    // ptr = strpbrk(new , old);
    // printf("The string is :- %s" , ptr);





}
