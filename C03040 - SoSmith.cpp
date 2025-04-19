#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

long long tongchuso (long long n)
{
	long long sum = 0;														 
	while (n != 0)
	{
		sum = sum + (n % 10);
		n = n / 10;
	}
	return sum;
}

long long tongthuasonguyento (long long n)
{
	long long s = 0;
    for (long long i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            s += tongchuso(i);
            n /= i;
        }
    }
    if (n > 1)
        s += tongchuso(n);
    return s;
}

int main ()
{
	long long n;
	scanf ("%lld", &n);
	
	if (tongchuso(n) == tongthuasonguyento(n))
	{
		printf ("YES");
	}
	else
	{
		printf ("NO");
	}
}
