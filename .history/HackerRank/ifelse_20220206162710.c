#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define MAX_LENGTH 100
#define NUM_STRINGS 9
int main()
{
    int n;
    scanf("%d", &n);
    // char arr[NUM_STRINGS][MAX_LENGTH] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    if(n == 1){
        printf("%s" , "one");
    }
    else if(n == 2){
        printf("%s" , "two");
    }
    else if(n == 3){
        printf("%s" , "three");
    }
    else if(n == 4){
        printf("%s" , "four");
    }
    else if(n == 5){
        printf("%s" , "five");
    }
    else if(n == 6){
        printf("%s" , "six");
    }
    else if(n == 7){
        printf("%s" , "seven");
    }
    else if(n == 8){
        printf("%s" , "eight");
    }
    else if(n == 9){
        printf("%s" , "nine");
    }
    else {
        printf("%s" , "one");
    }
}