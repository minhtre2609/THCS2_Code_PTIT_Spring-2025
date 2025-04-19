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
		double a;
		scanf ("%lf", &a);
		printf ("%.15lf\n", 1/a);
	}
}
