#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    char c[100005];
    scanf ("%s", c);

    int length = strlen(c);
    char max_c = c[length - 1];
    char res[100005];
    int temp = 0;

    res[temp++] = max_c;

    for (int i = length - 2; i >= 0; i--)
    {
        if (c[i] >= max_c)
        {
            max_c = c[i];
            res[temp++] = c[i];
        }
    }

    for (int i = temp - 1; i >= 0; i--)
    {
        printf ("%c", res[i]);
    }

    return 0;
}
