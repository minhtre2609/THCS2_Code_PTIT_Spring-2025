#include <stdio.h>

void multiply(int A[][100], int B[][100], int C[][100], int m, int n, int p, int q) {
    int temp[100][100] = {0}, D[100][100] = {0};
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            for (int k = 0; k < n; k++) {
                temp[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            for (int k = 0; k < p; k++) {
                D[i][j] += temp[i][k] * C[k][j];
            }
        }
    }
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", D[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n, p, q;
    int A[100][100], B[100][100], C[100][100];
    
    scanf("%d %d %d %d", &m, &n, &p, &q);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            scanf("%d", &C[i][j]);
        }
    }
    
    multiply(A, B, C, m, n, p, q);
    
    return 0;
}

