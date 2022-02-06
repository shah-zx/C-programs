#include<stdio.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

int Sum(int n)
{
    int s = 0;
    while (n != 0)
    {
        int ld = n % 10;
        s += ld;
        n /= 10;
    }
    return s;
}

signed main()
{

    int n;
    scanf("%d", &n);
    printf("%d" , Sum(n));
}
