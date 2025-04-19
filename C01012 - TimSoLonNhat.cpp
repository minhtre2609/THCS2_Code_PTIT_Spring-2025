#include <stdio.h>
#include <math.h>

int main ()
{
	long long x;
	long long maxx = -1e18;
	
	while (scanf ("%lld", &x) == 1)
	{
		if (x > maxx)
		{
			maxx = x;
		}
	}
	
	printf ("%lld", maxx);
	return 0;
}
