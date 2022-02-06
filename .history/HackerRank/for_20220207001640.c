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
    scanf("%c", &f);
    char s[20];
    scanf("%s", &s);
    char sen[MAX_LENGTH];
    scanf("%[^\n]%*c", sen);
    printf("%c\n", f);
    printf("%s\n", s);
    printf("%s\n", sen);
}