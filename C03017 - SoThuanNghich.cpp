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

int main(){
    int t;
    scanf ("%d", &t);
    
    while (t--)
    {
    	long long n;
        scanf ("%lld", &n);
        if(thuan_nghich(n))
		{
		printf("YES\n");
        }
        else 
        {
        	printf ("NO\n");
		}
	}
    return 0;
}
