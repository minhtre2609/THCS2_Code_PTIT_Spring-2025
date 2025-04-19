#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int test = 1; test <= t; test++) {
        int n, m;
        scanf("%d %d", &n, &m);
        int A[n][m];

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                scanf("%d", &A[i][j]);

        int maxRowSum = 0, rowToRemove = 0;

        for (int i = 0; i < n; i++) {
            int rowSum = 0;
            for (int j = 0; j < m; j++)
                rowSum += A[i][j];

            if (rowSum > maxRowSum) {
                maxRowSum = rowSum;
                rowToRemove = i;
            }
        }

        int newN = n - 1;
        int tempA[newN][m], newRow = 0;

        for (int i = 0; i < n; i++) {
            if (i == rowToRemove) continue;
            for (int j = 0; j < m; j++)
                tempA[newRow][j] = A[i][j];
            newRow++;
        }

        int maxColSum = 0, colToRemove = 0;

        for (int j = 0; j < m; j++) {
            int colSum = 0;
            for (int i = 0; i < newN; i++)
                colSum += tempA[i][j];

            if (colSum > maxColSum) {
                maxColSum = colSum;
                colToRemove = j;
            }
        }

        printf("Test %d:\n", test);

        for (int i = 0; i < newN; i++) {
            for (int j = 0; j < m; j++) {
                if (j == colToRemove) continue;
                printf("%d ", tempA[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

