#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define MAX_LENGTH 100

int main()
{
    char f;
    char s[20];
    char sen[MAX_LENGTH];
    scanf("%c\n", &f);
    scanf("%s\n", &s);
    scanf("%[^\n]%*c", sen);
    printf("%c\n", f);
    printf("%s\n", s);
    printf("%s\n", sen);
}