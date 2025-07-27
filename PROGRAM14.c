/* Read a String and Reverse the string in the same array itself.
   Merlin Xavier
   26 July 2025 */
#include <stdio.h>

char a[20];

void read() {
    printf("Enter a string: ");
    scanf("%s", a);
}

void reversal() {
    int i, count = 0, temp;
    for (i = 0; a[i] != '\0'; i++) {
        count++;
    }
    for (i = 0; i < count / 2; i++) {
        temp = a[i];
        a[i] = a[count - 1 - i];
        a[count - 1 - i] = temp;
    }

    printf("Reversed string: %s\n", a);
}

int main() {
    read();
    reversal();
    return 0;
}

