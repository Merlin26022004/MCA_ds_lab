/*Display the array elements in the same order using a recursive function.
Merlin Xavier
25 July 2025*/
#include <stdio.h>

int a[10], i;

void read() {
    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
    scanf("%d", &a[i]);
    }
}
void displayRecursive(int index) {
    if(index == 5)
        return; 
    printf("\t%d", a[index]);
    displayRecursive(index + 1);
}

int main() {
    read();
    printf("\nArray displayed using recursion: ");
    displayRecursive(0); 
    return 0;
}

