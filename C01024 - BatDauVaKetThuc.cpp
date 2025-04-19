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
		char a[10];
		scanf ("%s", a);
		int l = strlen(a);
		if (a[0] == a[l - 1])
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
