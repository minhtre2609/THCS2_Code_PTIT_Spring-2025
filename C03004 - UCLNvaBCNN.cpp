#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    long long x1, x2;
    scanf ("%lld %lld", &x1, &x2);
    long long a = x1;
    long long b = x2;
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf ("%lld\n", a); 
    printf ("%lld\n",(x1 * x2) / a );
}
