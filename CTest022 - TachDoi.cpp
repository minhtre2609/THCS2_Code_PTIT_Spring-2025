#include <stdio.h>
#include <string.h>
#include <stdlib.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a / gcd(a, b)) * b;
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        char N[19];
        scanf("%s", N);
        int len = strlen(N);
        
        if (len % 2 != 0) {
            printf("INVALID\n");
        } else {
            char left[10], right[10];
            strncpy(left, N, len / 2);
            left[len / 2] = '\0';
            strcpy(right, N + len / 2);
            
            long long num1 = atoll(left);
            long long num2 = atoll(right);
            
            printf("%lld\n", lcm(num1, num2));
        }
    }
    return 0;
}

