#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int a;
	scanf ("%d", &a);
	
	for (int i = 1; i <= 10; i++)
	{
		printf ("%d ", a*i);
	}
	
	return 0;
}
