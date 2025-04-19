#include <stdio.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int isFibonacci(int n) {
    int a = 1, b = 1;
    while (a < n) {
        int c = a + b;
        b = a;
        a = c;
    }
    return a == n;
}

int sumOfDigitsIsFibonacci(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return isFibonacci(sum);
}

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && sumOfDigitsIsFibonacci(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}

