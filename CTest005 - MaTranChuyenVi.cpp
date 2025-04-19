#include <stdio.h>
#include <math.h>
#include <string.h>

int main ()
{
    long long n, m, p;
    scanf ("%lld %lld %lld", &n, &m, &p);
    long long A[n + 5][m + 5];
    long long B[m + 5][p + 5];
    long long C[n + 5][p + 5];

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < m; j++)
        {
            scanf ("%lld", &A[i][j]);
        }
    }

    for (long long i = 0; i < m; i++)
    {
        for (long long j = 0; j < p; j++)
        {
            scanf ("%lld", &B[i][j]);
        }
    }

    
    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < p; j++)
        {
            C[i][j] = 0;
            for (long long k = 0; k < m; k++)
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < p; j++)
        {
            printf ("%lld ", C[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
