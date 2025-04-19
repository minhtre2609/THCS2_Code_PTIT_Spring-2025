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
	
	int minx = 1000000;
	int miny = 1000000;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < minx)
		{
			minx = a[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (a[i] < miny && a[i] != minx)
		{
			miny = a[i];
		}
	}
	
	printf ("%d %d", minx, miny);
	return 0;
}
