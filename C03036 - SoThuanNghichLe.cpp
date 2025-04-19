#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int check (char s[])
{
	int len = strlen(s);
	int sum = 0;
	
	for (int i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - i - 1])
		{
			return 0;
		}
	}
	
	for (int i = 0; i < len; i++)
	{
		int d = s[i] - '0';
		if (d % 2 == 0)
		{
			return 0;
		}
		sum = sum + d;
	}
	
	return (sum % 2 == 1);																																 
}

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		char c[20];
		scanf ("%s", c);
		if (check(c))
		{
			printf ("YES\n");
		}
		else 
		{
			printf ("NO\n");
		}
	}
}
