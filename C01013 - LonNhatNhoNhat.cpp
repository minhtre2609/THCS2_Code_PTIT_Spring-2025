#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

#define BUFFER_SIZE 10000000

int main() {
    char *buffer = (char *)malloc(BUFFER_SIZE);
    fread(buffer, 1, BUFFER_SIZE, stdin);

    int num = 0, max_val = INT_MIN, min_val = INT_MAX;
    char *ptr = buffer;

    while (*ptr) {
        if (*ptr >= '0' && *ptr <= '9') {
            num = num * 10 + (*ptr - '0');
        } else if (num > 0) {
            if (num > max_val) max_val = num;
            if (num < min_val) min_val = num;
            num = 0;
        }
        ptr++;
    }

    if (num > 0) {
        if (num > max_val) max_val = num;
        if (num < min_val) min_val = num;
    }

    printf("%d %d\n", max_val, min_val);
    free(buffer);
    return 0;
}

