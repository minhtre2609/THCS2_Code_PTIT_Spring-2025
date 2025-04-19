#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
    long long n;
    scanf("%lld", &n);
    
    for (long long num = 2; num < n; num++) 
	{
        long long sum = 1;
        for (long long i = 2; i * i <= num; i++) 
		{
            if (num % i == 0) 
			{
                sum += i;
                if (i != num / i) 
				{
                    sum += num / i;
                }
            }
        }
        if (sum == num) 
		{
            printf("%lld ", num);
        }
    }
    
    return 0;
}
