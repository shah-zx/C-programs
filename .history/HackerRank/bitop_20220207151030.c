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

    int a;
    scanf("%d", &a);
    // scanf("%d", &b);
    int i;
    int suma = 0;
    int sumn = 0;
    int sumx = 0;
    for (i = 1; i <= a; i++)
    {
        suma = i & i + 1;
        printf("%d" , suma);
        }
}
