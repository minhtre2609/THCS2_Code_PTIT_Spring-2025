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
		int a;
		scanf ("%d", &a);
		printf ("%d\n", 2*a);
	}
	
	return 0;
}
