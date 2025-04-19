#include <stdio.h>
#include <string.h>

int word_in_result(char *result, char *word) 
{
    char temp[1005];
    strcpy(temp, " ");
    strcat(temp, word);
    strcat(temp, " ");

    if (strstr(result, temp) != NULL) 
    {
        return 1; 
    }
    return 0; 
}

int main() 
{
    char s[1005];
    char result[1005] = " "; 
    fgets(s, sizeof(s), stdin);
    
    char *word = strtok(s, " \n");
    while (word != NULL) 
    {
        if (!word_in_result(result, word)) 
        {
            
            strcat(result, word);
            strcat(result, " ");
        }
        word = strtok(NULL, " \n");
    }

    printf("%s\n", result + 1); 
    
    return 0;
}

