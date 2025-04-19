#include <stdio.h>
#include <math.h>

int isPalindrome(int n) {
    int reversed = 0, original = n;
    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return reversed == original;
}

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int a, b, count = 0;
        scanf("%d%d", &a, &b);
        
        for (int i = a; i <= b; i++) {
            if (isPalindrome(i) && isPrime(i)) {
                printf("%d ", i);
                count++;
                if (count == 10) {
                    printf("\n");
                    count = 0;
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}

