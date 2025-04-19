#include <stdio.h>

void printParallelogram(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            printf("~");
        }
        
        printf("*");
        
        if (i == 0 || i == n - 1) {
            for (int j = 1; j < n; j++) {
                printf("*");
            }
        } else {
            for (int j = 1; j < n - 1; j++) {
                printf(".");
            }
            printf("*");
        }
        
        printf("\n");
    }
}

int main() {
    int n;
    scanf("%d", &n);
    printParallelogram(n);
    return 0;
}

