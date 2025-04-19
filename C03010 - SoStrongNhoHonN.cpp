#include <stdio.h>

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

int isStrong(int num) {
    int sum = 0, temp = num;
    while (temp > 0) {
        sum += factorial(temp % 10);
        temp /= 10;
    }
    return sum == num;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int first = 1;
    for (int i = 1; i < n; i++) {
        if (isStrong(i)) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
    
    return 0;
}

