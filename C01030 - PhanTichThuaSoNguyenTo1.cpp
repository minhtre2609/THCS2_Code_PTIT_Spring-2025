#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void phan_tich(int n, int testcase) 
{
    while (n % 2 == 0) 
	{
        printf ("2 ");
		n = n / 2;
    }
    
    for (int i = 3; i * i <= n; i += 2) 
	{
        while (n % i == 0) 
		{
            printf ("%d ", i);
			n = n / i;
        }
    }

    if (n > 1) 
	{
        printf("%d", n);
    }

    printf("\n");
}

int main() 
{
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) 
	{
        scanf("%d", &n);
        phan_tich(n, i);
    }

	return 0;
}

