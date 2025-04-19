#include <stdio.h>
#include <math.h>

int d[100005];

int main ()
{
	int n;
    scanf("%d", &n);
    int a[n + 5];
    int max;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (max < a[i])
        {
                max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        d[a[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (d[a[i]] > 0)
        {
            printf("%d %d\n", a[i], d[a[i]]);
            d[a[i]] = 0;
        }
    }
    printf ("\n");
}
