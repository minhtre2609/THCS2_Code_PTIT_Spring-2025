#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	
	for (int i = 1; i <= b; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			if (i == 1 || j == 1 || i == b || j == a)
			{
				printf ("*");
			}
			else
			{
				printf (" ");
			}
		}
		printf ("\n");
	}
	
	return 0;
}
