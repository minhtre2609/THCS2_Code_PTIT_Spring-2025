#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuan_hoa (char c[], int n)
{
    c[0] = toupper(c[0]);
    for (int i = 1; i < strlen(c); i++)
    {
        c[i] = tolower(c[i]);
    }
}

int main ()
{
    int n;
    scanf ("%d\n", &n);

    while (n--)
    {
        char c[80];
        fgets (c, 80, stdin);
        char *p = strtok(c, " ");
        while (p != NULL)
        {
            chuan_hoa (p, strlen(p));
            printf ("%s ", p);
            p = strtok (NULL, " ");
        }
    }

    printf ("\n");
}
