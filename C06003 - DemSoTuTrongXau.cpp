#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
	int t;
	scanf ("%d\n", &t);
	
	while (t--)
	{
		char c[205];
		gets(c);
		
		int cnt = 0;
		char *token = strtok (c, " ");
		while (token != NULL)
		{
			++cnt;
			token = strtok (NULL, " ");
		}
		
		printf ("%d\n", cnt);
	}
	
	return 0;
}
