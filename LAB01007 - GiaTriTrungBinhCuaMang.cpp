#include <stdio.h>
#include <math.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += a[i];
	}
	
	printf ("%.3f", (float)s / n);
}
