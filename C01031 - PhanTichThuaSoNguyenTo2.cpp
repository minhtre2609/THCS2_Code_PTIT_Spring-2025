#include <stdio.h>

void phan_tich(int n) {
    int first = 1;

    while (n % 2 == 0) {
        if (!first) printf("x");
        printf("2");
        first = 0;
        n /= 2;
    }

    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            if (!first) printf("x");
            printf("%d", i);
            first = 0;
            n /= i;
        }
    }

    if (n > 1) {
        if (!first) printf("x");
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;
    scanf("%d", &n);
    phan_tich(n);
    return 0;
}

