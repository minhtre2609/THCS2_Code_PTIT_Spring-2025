#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main ()
{
    long long test, a, b;
    long long x1, x2;
    scanf ("%lld", &test);
    while (test--)
    {
        scanf ("%lld %lld", &x1, &x2);
        a = x1;
        b = x2;
        while (b != 0) 
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        printf ("%lld\n", a); 
    }
}
