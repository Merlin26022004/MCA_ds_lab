/* Reverse a string using Stack
Merlin Xavier
27 July 2025 */

#include <stdio.h>
#define MAX 100

char stack[MAX];
int top = -1;
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        stack[++top] = c;
    }
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return '\0';
    } else {
        return stack[top--];
    }
}

int main() {
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str); 
    for (i = 0; str[i] != '\0'; i++) {
        push(str[i]);
    }
    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }

    printf("\n");
    return 0;
}

