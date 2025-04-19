#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf ("%d", &n);
    
    int a = 1;
    int b = 1;
	while (b < n)
	{
		int m = b;
		b = b + a;
		a = m;
	}
	
	if (b == n)
	{
		printf ("1");
	}
	else
	{
		printf ("0");
	}
    
	return 0;
}

