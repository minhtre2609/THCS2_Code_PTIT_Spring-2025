#include <stdio.h>

void printFibonacci(int n) {
    long long a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        if (i > 0) printf(" ");
        printf("%lld", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    printFibonacci(n);
    return 0;
}
