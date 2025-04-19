#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char s[85];
    fgets(s, 85, stdin);
    
    if (s[strlen(s) - 1] == '\n') 
	{
        s[strlen(s) - 1] = '\0';
    }
    
    char a[85][85];
    int cnt = 0;
    char *p = strtok(s, " ");
    
    while (p != NULL) 
	{
        strcpy(a[cnt++], p);
        p = strtok(NULL, " ");
    }
    
    printf("%c", tolower(a[0][0])); 
    for (int i = 1; i < cnt - 1; i++) 
	{
        printf("%c", tolower(a[i][0])); 
    }
    
    for (int i = 0; i < strlen(a[cnt - 1]); i++) 
	{
        a[cnt - 1][i] = tolower(a[cnt - 1][i]);
    }
    printf("%s", a[cnt - 1]);
    printf("@ptit.edu.vn\n");
    
    return 0;
}

