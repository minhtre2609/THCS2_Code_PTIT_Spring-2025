#include <stdio.h>

int main ()
{
	int u0, d, N;
	scanf ("%d %d %d", &u0, &d, &N);
	
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		sum += u0 + d * i;
	}
	printf ("%d", sum);
}
