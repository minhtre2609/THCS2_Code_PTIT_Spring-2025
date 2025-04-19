#include <stdio.h>

#define MAX_N 92

void generateFibonacci(long long fib[]) {
    fib[1] = 1;
    fib[2] = 1;
    for (int i = 3; i <= MAX_N; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
}

int main() {
    int t;
    scanf("%d", &t);

    long long fib[MAX_N + 1]; 
    generateFibonacci(fib);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++) {
            printf("%lld ", fib[i]);
        }
        printf("\n");
    }

    return 0;
}

