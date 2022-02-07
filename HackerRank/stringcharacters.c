#include <stdio.h>
#include <string.h>

int main()
{
    char *s;
    int i = 0;
    s = (char *)(malloc(1024 * sizeof(char)));
    scanf("%[^\n]", s);
    for (int i = 0; s[i] != 0; i++)
    {
        if (s[i] == 32)
        {
            printf("\n");
        }
        else
        {
            printf("%c", s[i]);
        }
    }
}