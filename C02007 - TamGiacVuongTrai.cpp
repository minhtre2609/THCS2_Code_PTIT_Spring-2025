#include <stdio.h>

int main ()
{
    long long n;
    scanf ("%lld", &n);

    for (int i = 1; i <= n; i++)
    {
        long long start = i;
        long long step = n - 1;
        for (int j = 1; j <= i; j++)
        {
            printf ("*");
            start = start + step;
            step--;
        }
        printf ("\n");
    }

    return 0;
}
