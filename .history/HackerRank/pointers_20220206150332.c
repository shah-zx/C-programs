#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <limits.h>
#define vi vector<int>
#define vii vector<pair<int, int>>
#define pii pair<int, int>
#define rep(i, a, b) for (int i = a; i < b; i++)

// void update(int *a, int *b)
// {
//     // Complete this function

// }

int main()
{
    {
        int a, b;
        int *pa = &a, *pb = &b;

        scanf("%d %d", &a, &b);
        // update(pa, pb);
        // printf("%d\n%d", a, b);
        printf("%d", a + b);
        printf("%d", a - b);
        return 0;
    }
}
