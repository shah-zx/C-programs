#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int main(){


 int a , b;
 scanf("%d\n" , &a);
 scanf("%d" , &b);
 for (int i = 1; i <= a; i++)
 {
    for (int j = i + 1; j <= a; i++)
    {
        printf("%d" , j);
    }
    
 }
 


}