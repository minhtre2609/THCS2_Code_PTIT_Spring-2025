#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		long long n;
		scanf ("%lld", &n);
		if (sqrt (n) == (long long)sqrt(n))
		{
			printf ("YES\n");
		}
		else
		{
			printf ("NO\n");
		}
	}
	
	return 0;
}
