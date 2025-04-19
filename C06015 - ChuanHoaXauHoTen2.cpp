#include <stdio.h>
#include <string.h>
#include <ctype.h>

void chuan_hoa(char *c) {
    c[0] = toupper(c[0]);
    for (int i = 1; i < strlen(c); i++)
        c[i] = tolower(c[i]);
}

int main() {
    int n;
    scanf("%d\n", &n);

    while (n--) {
        char c[80], ho[80] = "", ten[80] = "";
        fgets(c, 80, stdin);
        c[strcspn(c, "\n")] = 0;

        char words[20][20];
        int count = 0;

        char *p = strtok(c, " ");
        while (p != NULL) {
            if (strlen(p) > 0) {
                strcpy(words[count++], p);
            }
            p = strtok(NULL, " ");
        }

        if (count == 0) continue;

        strcpy(ho, words[0]);
        for (int i = 0; i < strlen(ho); i++)
            ho[i] = toupper(ho[i]);

        for (int i = 1; i < count; i++) {
            chuan_hoa(words[i]);
            strcat(ten, words[i]);
            if (i < count - 1) strcat(ten, " ");
        }

        printf("%s, %s\n", ten, ho);
    }

    return 0;
}

