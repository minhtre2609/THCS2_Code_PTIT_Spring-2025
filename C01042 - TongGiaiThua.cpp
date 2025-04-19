#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	long long n;
	scanf ("%lld", &n);
	
	long long s = 0;
	long long t = 1;
	for (long long i = 1; i < n + 1; i++)
	{
		t *= i;
		s += t;
	}
	printf ("%lld", s);
	
	return 0;
}
