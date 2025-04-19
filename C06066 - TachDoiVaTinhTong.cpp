#include <stdio.h>
#include <string.h>

void dao(char a[]) {
    int d = strlen(a) - 1, l = 0;
    while (d > l) {
        char cnt = a[l];
        a[l] = a[d];
        a[d] = cnt;
        l++;
        d--;
    }
}

void tong(char t[]) {
    char a[110] = {'0'}, b[110] = {'0'}, x[110] = {'0'};
    int d1 = strlen(t) / 2, d2 = strlen(t) - d1, cnt = 0;
    strncpy(b, t + d1, d2);
    strncpy(a, t, d1);
    dao(a);
    dao(b);
    for (int i = 0; i < d2; i++) {
        if (i > d1 - 1) a[i] = '0';
        int d = a[i] + b[i] - '0' - '0' + cnt;
        if (d > 9) {
            x[i] = d % 10 + '0';
            cnt = 1;
            if (i == d2 - 1) x[i + 1] = '1';
        } else {
            x[i] = d + '0';
            cnt = 0;
        }
    }
    int d = strlen(x);
    while (x[d - 1] == '0') {
        x[d - 1] = '\0';
        d--;
    }
    dao(x);
    strcpy(t, x);
}

int main() {
    char t[200];
    gets(t);
    while (t[0] == '0' && strlen(t) > 1) {
        for (int i = 0; i < strlen(t); i++) t[i] = t[i + 1];
    }
    if (strlen(t) == 1) {
        printf("%s", t);
        return 0;
    }
    while (strlen(t) > 1) {
        tong(t);
        printf("%s\n", t);
    }
}

