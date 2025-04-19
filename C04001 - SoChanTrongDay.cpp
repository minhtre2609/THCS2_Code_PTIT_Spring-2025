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
		int n;
		scanf ("%d", &n);
		int x;
		for (int i = 0; i < n; i++)
		{
			scanf ("%d", &x);
			if (x % 2 == 0)
			{
				printf ("%d ", x);
			}
		}
		printf ("\n");
	}
	
	return 0;
}
