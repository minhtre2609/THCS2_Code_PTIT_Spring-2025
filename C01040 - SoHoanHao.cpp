#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
    long long n;
	scanf("%lld", &n);
    long long tong = 0;
    for (long long i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
                
            tong += i;
            if(n / i != i)
            {
                    
                tong += (n / i);
            }
        }
    }
    tong -= n;
    if (tong == n)
    {
        printf ("1");
    }
    else
    {
        printf ("0");
    }
}
