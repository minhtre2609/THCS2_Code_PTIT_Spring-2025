#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	
	int x = 0;
	for (int i = 0; i < a; i++)
	{
		for (int k = 0; k < x; k++)
		{
			printf ("~");
		}
		for (int j = 0; j < b; j++)
		{
			printf ("*");
		}
		x++;
		printf ("\n");
	}
}
