#include <stdio.h>

void insertArray(int a[], int *n, int b[], int m, int i) {
    for (int j = *n - 1; j >= i; j--) {
        a[j + m] = a[j];
    }
    for (int k = 0; k < m; k++) {
        a[i + k] = b[k];
    }
    *n += m;
}

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n, m, i;
        scanf("%d %d %d", &n, &m, &i);  
        int a[n + m], b[m];

        for (int j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }
        for (int j = 0; j < m; j++) {
            scanf("%d", &b[j]);
        }

        insertArray(a, &n, b, m, i);

        printf("Test %d:\n", test);
        for (int j = 0; j < n; j++) {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    	
    return 0;
}

