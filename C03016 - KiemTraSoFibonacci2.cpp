#include <stdio.h>

#define MAX_FIB 93  
long long fib[93];   

void precomputeFibonacci() {
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < MAX_FIB; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int isFibonacci(long long n) {
    for (int i = 0; i < MAX_FIB; i++) {
        if (fib[i] == n) return 1;  
        if (fib[i] > n) break;      
    }
    return 0;
}

int main() {
    precomputeFibonacci();  

    int t;
    scanf("%d", &t);

    while (t--) {
        long long n;
        scanf("%lld", &n);
        
        if (isFibonacci(n)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}

