#include <stdio.h>
#include <math.h>

void phan_tich(int n) 
{
    int count, first = 1;
    
    printf("%d = ", n);
    
    count = 0;
    while (n % 2 == 0) 
    {
        count++;
        n /= 2;
    }
    if (count > 0) 
    {
        printf("2^%d", count);
        first = 0;
    }
    
    for (int i = 3; i * i <= n; i += 2) 
    {
        count = 0;
        while (n % i == 0) 
        {
            count++;
            n /= i;
        }
        if (count > 0) 
        {
            if (!first) printf(" * ");
            printf("%d^%d", i, count);
            first = 0;
        }
    }
    
    if (n > 1) 
    {
        if (!first) printf(" * ");
        printf("%d^1", n);
    }
    
    printf("\n");
}

int main() 
{
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) 
    {
        scanf("%d", &n);
        phan_tich(n);
    }

    return 0;
}

