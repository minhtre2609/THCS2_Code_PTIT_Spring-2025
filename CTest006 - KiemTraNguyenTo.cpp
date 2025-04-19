#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int nto(int n) 
{
    if (n < 2) 
    {
    	return 0;
	}
    
	for (int i = 2; i * i <= n; i++) 
	{
        if (n % i == 0) 
        {
        	return 0;
		}
    }
    
	return 1;
}

int main ()
{
	int n, m;
	scanf ("%d %d", &n, &m);
	
	int a[n][m];
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			scanf ("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			printf ("%d ", nto(a[i][j]));
		}
		printf ("\n");
	}
	
	return 0;
}
