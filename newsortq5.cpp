#include <stdio.h>

int a[10], i, j, temp;

void read() {
    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
}
void sort() {
    for(i = 0; i < 5; i++) {  //1,6,9,0,3
        for(j = i; j < 5; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void display() {
    printf("\nSorted Array: ");
    for(i = 0; i < 5; i++) {
        printf("\t%d", a[i]);
    }
}
int main() {
    read();
    sort();
    display(); 
    return 0;
}

