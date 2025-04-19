#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

char a[20];

int check() 
{
    int n = strlen(a);
    if (a[0] - '0' != (a[n - 1] - '0') * 2 && (a[0] - '0') * 2 != a[n - 1] - '0')
        return 0;
    for (int i = 1; i <= (n - 1) / 2; i++)
        if (a[i] != a[n - i - 1])
            return 0;
    return 1;
}

int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
	{
        scanf("%s", a);
        printf(check() ? "YES\n" : "NO\n");
    }
}
