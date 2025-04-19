#include <stdio.h>
#include <stdlib.h>

int cmp_asc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int cmp_desc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int M, N;
        char order;
        scanf("%d %d %c", &M, &N, &order);
        
        int a[M], b[N], merged[M + N];
        
        for (int i = 0; i < M; i++)
            scanf("%d", &a[i]);
        for (int i = 0; i < N; i++)
            scanf("%d", &b[i]);
        
        if (order == 'F') {
            for (int i = 0; i < M; i++) merged[i] = a[i];
            for (int i = 0; i < N; i++) merged[M + i] = b[i];
        } else if (order == 'A') {
            for (int i = 0; i < N; i++) merged[i] = b[i];
            for (int i = 0; i < M; i++) merged[N + i] = a[i];
        } else {
            for (int i = 0; i < M; i++) merged[i] = a[i];
            for (int i = 0; i < N; i++) merged[M + i] = b[i];
            
            if (order == 'T') {
                qsort(merged, M + N, sizeof(int), cmp_asc);
            } else if (order == 'G') {
                qsort(merged, M + N, sizeof(int), cmp_desc);
            }
        }
        
        for (int i = 0; i < M + N; i++) {
            printf("%d ", merged[i]);
        }
        printf("\n");
    }
    return 0;
}
