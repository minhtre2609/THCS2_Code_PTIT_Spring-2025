#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int tach_chan_le (int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			printf ("%d ", a[i]);
		}
	}
	
	printf ("\n");
	
	for (int j = 0; j < n; j++)
	{
		if (a[j] % 2 != 0)
		{
			printf ("%d ", a[j]);
		}
	}
}

int main ()
{
	int n;
	scanf ("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++)
	{
		scanf ("%d", &a[i]);
	}
	
	tach_chan_le (a, n);
}
