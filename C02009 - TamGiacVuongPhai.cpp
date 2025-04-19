#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    long long n;
    scanf ("%lld", &n);

    int m = n - 1;
	for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf ("~");
        }
        for (int k = 0; k < n - m; k++)
        {
        	printf ("*");
		}
        m--;
        printf ("\n");
    }

    return 0;
}
