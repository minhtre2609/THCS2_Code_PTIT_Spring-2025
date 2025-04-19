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
    int a, b;
    scanf("%d %d", &a, &b);
    
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    
    int first = 1;
    for (int i = a; i <= b; i++) {
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

