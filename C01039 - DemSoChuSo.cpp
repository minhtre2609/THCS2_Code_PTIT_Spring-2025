#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	long long n;
	scanf ("%lld", &n);
	
	long cnt = 0;
	while (n != 0)
	{
		cnt++;
		n = n / 10;
	}
	printf ("%lld", cnt);
	return 0;
}
