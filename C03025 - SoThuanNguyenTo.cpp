#include <stdio.h>
#include <math.h>

int prime_check(int n)
{
    if (n < 2)
    {
        return 0;
    }

    if (n == 2 || n == 3)
    {
        return 1;
    }
    
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }

    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
        {
            return 0;
        }
    }

    return 1;
}

int tnt_check(int n)
{
    long long sum = 0;
    while (n > 0)
    {
        int temp = n % 10;
        if (temp != 2 && temp != 3 && temp != 5 && temp != 7)
        {
            return 0;
        }
        sum += temp;
        n /= 10;
    }
    return prime_check(sum);
}

int minn(int a, int b)
{
    return (a > b) ? b : a;
}

int maxx(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int l, r;
        scanf("%d %d", &l, &r);
        int count = 0;
        int first = minn(l, r);
        int last = maxx(l, r);
        for (int i = first; i <= last; i++)
        {
            if (tnt_check(i) && prime_check(i))
            {
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

