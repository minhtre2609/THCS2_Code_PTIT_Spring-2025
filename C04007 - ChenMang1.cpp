#include <stdio.h>

void chenmang(int a[], int b[], int m, int i, int *n) {
    for (int j = *n - 1; j >= i; j--) {
        a[j + m] = a[j];
    }
    for (int k = 0; k < m; k++) {
        a[i + k] = b[k];
    }
    *n += m;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    int a[n + m], b[m];  

    for (int l = 0; l < n; l++) {
        scanf("%d", &a[l]);
    }

    for (int j = 0; j < m; j++) {
        scanf("%d", &b[j]);
    }

    int i;
    scanf("%d", &i);

    chenmang(a, b, m, i, &n);

    for (int k = 0; k < n; k++) {
        printf("%d ", a[k]);
    }

    return 0;
}

