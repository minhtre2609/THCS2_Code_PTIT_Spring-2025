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
		int a, b, c, d;
		scanf ("%d %d %d %d", &a, &b, &c, &d);
		
		if (abs(a - c) == abs(b - d))
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
