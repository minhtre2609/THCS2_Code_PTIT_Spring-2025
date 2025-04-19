#include <stdio.h>

int main ()
{
    long long n;
    scanf ("%lld", &n);
    long long A[105][105];

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            scanf ("%lld", &A[i][j]);
        }
    }

    for (long long i = 0; i < n; i++)
    {
        long long tmp = A[i][i];
        A[i][i] = A[i][n - i - 1];
        A[i][n - i - 1] = tmp;
    }

    for (long long i = 0; i < n; i++)
    {
        for (long long j = 0; j < n; j++)
        {
            printf ("%lld ", A[i][j]);
        }
        printf ("\n");
    }

    return 0;
}
