#include <stdio.h>

int main ()
{
	int t;
	scanf ("%d", &t);
	
	while (t--)
	{
		int a, b, c ,d;
		scanf ("%d %d %d %d", &a, &b, &c, &d);
		
		while (b != 0)
		{
			int tmp1 = b;
			b = a % b;
			a = tmp1;
		}
		
		while (d != 0)
		{
			int tmp2 = d;
			d = c % d;
			c = tmp2;
		}
		
		if (a == c)
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
