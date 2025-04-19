#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void phan_tich(int n, int testcase) 
{
    int dem;
    printf("Test %d: ", testcase);

    dem = 0;
    while (n % 2 == 0) 
	{
        n = n / 2;
        dem++;
    }
    if (dem > 0) 
	{
        printf("2(%d) ", dem);
    }

    for (int i = 3; i * i <= n; i += 2) 
	{
        dem = 0;
        while (n % i == 0) 
		{
            n = n / i;
            dem++;
        }
        if (dem > 0) {
            printf("%d(%d) ", i, dem);
        }
    }

    if (n > 1) 
	{
        printf("%d(1)", n);
    }

    printf("\n");
}

int main() {
    int t, n;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) 
	{
        scanf("%d", &n);
        phan_tich(n, i);
    }

    return 0;
}

