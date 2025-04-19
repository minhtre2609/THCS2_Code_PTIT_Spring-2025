#include <stdio.h>
#include <math.h>

#define MAX_N 1000005

int isPrime[MAX_N];

void sieve()
{
    for (int i = 0; i < MAX_N; i++)
        isPrime[i] = 1;
    isPrime[0] = isPrime[1] = 0;

    for (int i = 2; i * i < MAX_N; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j < MAX_N; j += i)
            {
                isPrime[j] = 0;
            }
        }
    }
}

int main()
{
    sieve();

    int t;
    scanf("%d", &t);

    while (t--)
    {
        long long l, r;
        scanf("%lld %lld", &l, &r);

        long long l1 = ceil(sqrt(l));
        long long r1 = floor(sqrt(r));

        int count = 0;
        for (long long i = l1; i <= r1; i++)
        {
            if (isPrime[i])
                count++;
        }
        printf("%d\n", count);
    }

    return 0;
}

