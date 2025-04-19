#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);
    getchar(); 

    while (t--)
    {
        char a[20];
        fgets(a, sizeof(a), stdin);

        int n = strlen(a);
        if (a[n - 1] == '\n') 
		{
            a[n - 1] = '\0';
            n--; 
        }

        int pt = 0; 
        
        for (int i = 1; i < n; i++)  
        {
            if (a[i] < a[i - 1])
            {
                pt = 1;
                break;
            }
        }

        if (pt == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

