#include <stdio.h>
#include <string.h>

void maxmin(char n[]) {
    char maxn = '0', minn = '9';
    
    for (int i = 0; i < strlen(n); i++) {
        if (n[i] > maxn) {
            maxn = n[i];
        }
        if (n[i] < minn) {
            minn = n[i];
        }
    }
    printf("%c %c\n", maxn, minn);
}

int main() {
    int t;
    scanf("%d", &t);
    
    while (t--) {
        char n[20]; 
        scanf("%s", n);
        maxmin(n);
    }
    return 0;
}

