#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    long long n;
    scanf ("%lld", &n);

    int m = 1;
	for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == j || j == 0 || i == n - 1)
            {
            	printf ("*");
			}
			else
			{
				printf (".");
			}
        }
        m++;
        printf ("\n");
    }

    return 0;
}
