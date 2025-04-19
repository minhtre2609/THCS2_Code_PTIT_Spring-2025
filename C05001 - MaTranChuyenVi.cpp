#include <stdio.h>
#include <stdlib.h>

int main() 
{
    long long m, n;
    scanf("%lld %lld", &m, &n);

    long long A[m][n], B[n][m];

    for (long long i = 0; i < m; i++) 
	{
        for (long long j = 0; j < n; j++) 
		{
            scanf("%lld", &A[i][j]);
        }
    }

    for (long long i = 0; i < n; i++) 
	{
        for (long long j = 0; j < m; j++) 
		{
            B[i][j] = A[j][i];
        }
    }

    for (long long i = 0; i < n; i++) 
	{
        for (long long j = 0; j < m; j++) 
		{
            printf("%lld ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

