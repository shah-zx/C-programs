#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
int main()
{
    int a, b;
    float c, d;
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
    int add1 = a + b;
    int sub1 = a - b;
    float add2 = c + d;
    float sub2 = c - d;
    printf("%d %d" , add1 ,sub1);
    printf("%d %d" , add2 ,sub2);
}