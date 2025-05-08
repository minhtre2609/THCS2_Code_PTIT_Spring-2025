#include <stdio.h>
#include <string.h>

typedef struct {
    char s[50];
    double n;
} data;

void sort(data* a, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (a[i].n > a[j].n) {
                data t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
}

void print(data* a, int n) {
    for (int i = 0; i < n; ++i)
        printf("%s ", a[i].s);
    printf("\n");
    for (int i = 0; i < n; ++i)
        printf("%.3lf ", a[i].n);
    printf("\n");
}

void solve(data* a, int m) {
    int ok = 1;
    while (m) {
        if (!ok) {
            sort(a, m);
            print(a, m);
            ok = 1;
        }
        strcat(a[0].s, a[1].s);
        a[0].n += a[1].n;
        for (int i = 1; i < m - 1; ++i)
            a[i] = a[i + 1];
        --m;
        for (int i = 1; i < m; ++i) {
            if (a[i].n < a[i - 1].n) {
                ok = 0;
                break;
            }
        }
        print(a, m);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int m;
        scanf("%d", &m);
        data a[m];
        for (int i = 0; i < m; ++i)
            scanf("%s", a[i].s);
        for (int i = 0; i < m; ++i)
            scanf("%lf", &a[i].n);
        sort(a, m);
        print(a, m);
        solve(a, m);
        printf("\n");
    }
    return 0;
}

