#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int z[6];
    for (int i = 0; i < 6; i++)
        scanf("%d", &z[i]);

    for (int i = 0; i < 6; i += 2)
        if (z[i + 1] > z[i])
            swap(&z[i], &z[i + 1]);

    for (int i = 0; i < 4; i += 2)
        for (int j = i + 2; j < 6; j += 2)
            if (z[j] > z[i]) {
                swap(&z[i], &z[j]);
                swap(&z[i + 1], &z[j + 1]);
            }

    if (z[0] == z[2] && z[2] == z[4] && z[0] == z[1] + z[3] + z[5]) {
        printf("YES");
        return 0;
    }

    int a, b, c, d, e, f;
    for (int i = 0; i < 2; i++) {
        a = z[i];
        b = z[1 - i];
        for (int j = 0; j < 2; j++) {
            c = z[2 + j];
            d = z[3 - j];
            for (int y = 0; y < 2; y++) {
                e = z[4 + y];
                f = z[5 - y];
                if (a == f + d && e == c && b + c == a) {
                    printf("YES");
                    return 0;
                }
            }
        }
    }
    printf("NO");
}
