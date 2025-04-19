#include <stdio.h>
#include <math.h>

long long thuan_nghich(long long n)
{
    long long m = 0, tmp = n;
    while(n != 0)
	{
        m = m * 10 + n % 10; 
        n /= 10;
    }
    if(tmp == m)
	{ 
        return 1;
    }
    return 0;
}

int main()
{
    int a, b;
    scanf ("%d %d", &a, &b);
    
    int checka = thuan_nghich(a);
    int checkb = thuan_nghich(b);
    
    if ((checka && ! checkb) || (!checka && checkb))
    {
    	printf ("YES");
	}
	else
	{
		printf ("NO");
	}
	
    return 0;
}
