#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>

#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int max_of_four(int a, int b, int c, int d)
{
    int sum = 0;
    sum += a;
    sum += b;
    sum += c;
    sum += d;
    int y = max(a, b);
    int r = max(c, d);
    int rem = max(y, r);
    return rem;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
