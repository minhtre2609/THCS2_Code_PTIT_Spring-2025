#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int summ (int n)
{
	int s = 0;														 
    while (n != 0)
	{
	s = s + (n % 10);
	n = n / 10;
	}
	return s;
}

int main ()
{
	int a, b;
	scanf ("%d %d", &a, &b);
	
	if (summ(a) > summ(b))
	{
		printf ("%d %d", b, a);
	}
	else
	{
		printf ("%d %d", a, b);
	}
	
	return 0;
}
