#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int check (char a[])
{
    int n = strlen(a);
    int c = 0, l = 0, cnt = 0;

    if (a[0] == '0')
    {
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '0' || a[i] == '2' || a[i] == '4' || a[i] == '6' || a[i] == '8')
        {
            c++;
            cnt++;
        }
        else if (a[i] == '1' || a[i] == '3' || a[i] == '5' || a[i] == '7' || a[i] == '9')
        {
            l++;
            cnt++;
        }
        else
        {
            return -1;
        }
    }

    if (c > l && n % 2 == 0)
    {
        return 1;
    }
    if (l > c && n % 2 != 0)
    {
        return 1;
    }

    return 0;
}


int main ()
{
    int t;
    scanf ("%d", &t);

    while (t--)
    {
        char a[1005];
        scanf ("%s", a);
        
        int k = check(a);
        if (k == 1)
        {
            printf ("YES\n");
        }
        else if (k == 0)
        {
            printf ("NO\n");
        }
        else
        {
            printf ("INVALID\n");
        }
    }

    return 0;
}