#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	long long t;
	scanf ("%lld", &t);
	
	while (t--)
	{
		long long a;
		scanf ("%lld", &a);
		printf ("%lld\n", a*a);
	}
	
	return 0;
}
