#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long long fibo(int n)
{
    static long long a[100] = {0, 1, 1}; 

    if (a[n] != 0)
        return a[n];

    a[n] = fibo(n - 1) + fibo(n - 2);
    return a[n];
}

int main()
{
    int t, n;
    scanf("%d", &t);

    while (t--)
    {
        scanf("%d", &n);
        printf("%lld\n", fibo(n));
    }

    return 0;
}

