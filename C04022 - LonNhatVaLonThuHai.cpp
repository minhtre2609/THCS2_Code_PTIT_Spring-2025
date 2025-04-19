#include <stdio.h>
#include <math.h>

int main ()
{
	int n;
	scanf ("%d", &n);
	int a[n];
	for (int i = 0 ; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	int maxx = 0;
	int maxy = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > maxx)
		{
			maxx = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] > maxy && a[i] != maxx)
		{
			maxy = a[i];
		}
	}
	
	printf ("%d %d", maxx, maxy);
	return 0;
}
