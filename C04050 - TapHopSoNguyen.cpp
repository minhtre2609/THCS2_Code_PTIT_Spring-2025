#include <stdio.h>
#include <stdlib.h>

#define MAX_VALUE 1000

void readSet(int arr[], int *size, int set[]) {
    for (int i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
        set[arr[i]] = 1;
    }
}

void printSet(int set[]) {
    int first = 1;
    for (int i = 0; i < MAX_VALUE; i++) {
        if (set[i]) {
            if (!first) {
                printf(" ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    int a[n], b[m];
    int setA[MAX_VALUE] = {0}, setB[MAX_VALUE] = {0};
    
    readSet(a, &n, setA);
    readSet(b, &m, setB);
    
    int intersection[MAX_VALUE] = {0}, differenceA[MAX_VALUE] = {0}, differenceB[MAX_VALUE] = {0};
    
    for (int i = 0; i < MAX_VALUE; i++) {
        if (setA[i] && setB[i]) {
            intersection[i] = 1;
        }
        if (setA[i] && !setB[i]) {
            differenceA[i] = 1;
        }
        if (setB[i] && !setA[i]) {
            differenceB[i] = 1;
        }
    }
    
    printSet(intersection);
    printSet(differenceA);
    printSet(differenceB);
    
    return 0;
}

