#include <stdio.h>

int isPerfect(long long num) {
    if (num < 2) return 0;
    long long sum = 1;
    for (long long i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;
            if (i != num / i) {
                sum += num / i;
            }
        }
    }
    return sum == num;
}

int main() {
    long long a, b;
    scanf("%lld %lld", &a, &b);
    
    if (a > b) {
        long long temp = a;
        a = b;
        b = temp;
    }
    
    int first = 1;
    for (long long i = a; i <= b; i++) {
        if (isPerfect(i)) {
            if (!first) {
                printf(" ");
            }
            printf("%lld", i);
            first = 0;
        }
    }
    printf("\n");
    
    return 0;
}

