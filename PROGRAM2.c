/*Menu-driven program to insert, search, delete and sort elements in an array
using functions (use global variables).
Merlin Xavier
25 July 2025*/
#include <stdio.h>

int a[5], pos = -1,i;
void insert(int e) {
    if (pos + 1 == 5) {
        printf("Error: Array full\n");
    } else {
        a[++pos] = e;
        printf("Inserted %d at position %d\n", e, pos);
    }
}
void search() {
    int s, i, found = 0;
    printf("Enter element to be searched: ");
    scanf("%d", &s);
    for (i = 0; i <= pos; i++) {
        if (a[i] == s) {
            printf("Element found at position: %d\n", i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element not found\n");
    }
}
void sort() {
    int i, j, temp;
    if (pos == -1) {
        printf("Error: Array empty\n");
        return;
    }
    for (i = 0; i < pos; i++) {
        for (j = i + 1; j <= pos; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Array is sorted!\n");
    for (i = 0; i <= pos; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
void deletee() {
    if (pos == -1) {
        printf("Error: Array empty\n");
    } else {
        printf("Deleted element: %d\n", a[pos--]);
    }
}
void display() {
    if (pos == -1) {
        printf("Array is empty\n");
        return;
    }
    printf("Array elements:\n");
    for ( i = 0; i <= pos; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
int menu() {
    int ch;
    printf("\n1. INSERT\n2. DELETE\n3. DISPLAY ALL\n4. SEARCH\n5. SORT\n6. EXIT\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}
void processArray() {
    int ch, val;
    while ((ch = menu()) != 6) {
        switch (ch) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &val);
                insert(val);
                break;
            case 2:
                deletee();
                break;
            case 3:
                display();
                break;
            case 4:
                search();
                break;
            case 5:
                sort();
                break;
            default:
                printf("Error: Wrong Choice!\n");
        }
    }
}

int main() {
    processArray();
    return 0;
}

