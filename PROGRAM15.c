/* Read n Strings and display them in ascending order.
Merlin Xavier
27 July 2025 */

#include <stdio.h>
#include <string.h>

int main() {
    char a[10][100]; 
    int i, j, n;
    char temp[100]; 

    printf("Enter number of words (max 10):\n");
    scanf("%d", &n);

    printf("Enter %d words:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%s", a[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (strcmp(a[i], a[j]) > 0) { 
                strcpy(temp, a[i]);
                strcpy(a[i], a[j]);
                strcpy(a[j], temp);
            }
        }
    }

    printf("\nIn ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", a[i]);
    }

    return 0;
}

