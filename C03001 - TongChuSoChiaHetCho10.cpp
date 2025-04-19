#include <stdio.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		long long n;
	    scanf ("%lld", &n);
	
	    long long s = 0;														 
     	while (n != 0)
	    {
		s = s + (n % 10);
		n = n / 10;
	    }
	    
	    if (s % 10 == 0)
	    {
	    	printf ("YES\n");
		}
		else 
		{
			printf ("NO\n");
		}
	}
	
	return 0;																									
}
