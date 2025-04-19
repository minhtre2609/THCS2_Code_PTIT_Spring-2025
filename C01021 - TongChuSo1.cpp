#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	long long n;
	scanf ("%lld", &n);
	
	long long s = 0;														 
	while (n != 0)
	{
		s = s + (n % 10);
		n = n / 10;
	}
	printf ("%lld", s);
	return 0;																									
}
