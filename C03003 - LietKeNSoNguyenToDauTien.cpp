#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int prime_check (int n)
{
    if (n == 2 || n == 3)
    {
        return 1;
    }
    
    if (n < 2 || n % 2 == 0 || n % 3 == 0)
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

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int s = 0; 
	int i = 2;
	while (s < n)
	{
		if (prime_check(i))
		{
			printf ("%d\n", i);
			s++;
		}
		i++;
	}
	return 0;
}
