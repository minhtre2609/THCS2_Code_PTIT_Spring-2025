#include <stdio.h>

int d[100005];

int main() {
    int t;
    scanf("%d", &t);
    
    for (int test = 1; test <= t; test++) {
        int n;
        scanf("%d", &n);
        int a[n];
        
        int max = 0;
        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] > max) {
                max = a[i];
            }
            d[a[i]]++;
        }
        
        printf("Test %d:\n", test);
        for (int i = 0; i < n; i++) {
            if (d[a[i]] > 0) {
                printf("%d xuat hien %d lan\n", a[i], d[a[i]]);
                d[a[i]] = 0;
            }
        }
        printf("\n");
    }

    return 0;
}

