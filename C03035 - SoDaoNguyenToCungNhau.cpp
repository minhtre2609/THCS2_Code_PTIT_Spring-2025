#include <stdio.h>
#include <math.h>

int main ()
{
    long long t, count, dao;
    scanf ("%lld", &t);
    while (t--)
    { 
        long long n;
        scanf("%lld",&n);
        count = 0;
        dao = 0;
        long long red = n;
        long long ten = n;
        while (n > 0)
        {
            count++;
            n /= 10;
        }
        while (red > 0)
        {
            dao += (red % 10) * pow(10, count-1);
            red /= 10;
            count--;
        }
        while (dao != 0) 
        {
            int temp = dao;
            dao = ten % dao;
            ten = temp;
        }
        if (ten == 1)
        {
            printf ("YES\n");
        }
        else
        {
            printf ("NO\n");
        }
    }

}
