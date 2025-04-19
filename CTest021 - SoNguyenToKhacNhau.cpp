#include <stdio.h>

int isPrime(int n) 
{
    if (n < 2) return 0;
    
	for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;
    
	return 1;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, a[1000], mark[1001] = {};
        scanf("%d", &n);

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (isPrime(a[i])) mark[a[i]] = 1;
        }

        for (int i = 2; i <= 1000; i++)
            if (mark[i]) printf("%d ", i);
        printf("\n");
    }

    return 0;
}

