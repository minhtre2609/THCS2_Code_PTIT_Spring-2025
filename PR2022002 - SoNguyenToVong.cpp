#include <stdio.h>
#include <math.h>

int isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0)
            return 0;
    return 1;
}

int isReversiblePrime(int n) {
    if (!isPrime(n))
        return 0;
    int reversed = 0;
    int temp = n;
    while (temp > 0) {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    }
    return isPrime(reversed);
}

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
        printf("%d ", isReversiblePrime(a[i]) ? 1 : 0);
    return 0;
}

