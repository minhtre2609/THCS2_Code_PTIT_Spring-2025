#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int is_prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int sum_of_digits(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);
        
        int gcd_value = gcd(a, b);
        int digit_sum = sum_of_digits(gcd_value);
        
        if (is_prime(digit_sum)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}

