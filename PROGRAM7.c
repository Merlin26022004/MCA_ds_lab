/*Display array elements in reverse order using a recursive function.
Merlin Xavier
25 July 2025*/
#include <stdio.h>

int a[10], i,n;

void read() {
	printf("Enter size of array:");
	scanf("%d",&n);
    printf("\nEnter %d elements: ",n);
    for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    }
}
void displayRecursive(int index) {
    if(index < 0)
        return; 
    printf("\t%d", a[index]);
    displayRecursive(index - 1);
}

int main() {
    read();
    printf("\nArray displayed using recursion: ");
    displayRecursive(n-1); 
    return;
}

