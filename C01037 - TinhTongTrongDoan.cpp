#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	
	int ssh; 
	ssh = abs(b-a) + 1;
	int s;
	s = ((a + b) * ssh ) / 2;
	
	printf ("%d", s);
	
	return 0;
}
