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

    char s[1000];
    scanf("%s", s);
    int g = sizeof(s);
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    int ten = 0;

    for (int i = 0; i < g; i++)
    {
        if (s[i] == '1')
        {
           one++;
        }
        else if(s[i] == '2')
        {
            two++;
        }
    }
}