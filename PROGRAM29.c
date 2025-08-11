/* Demonstrate queue using array.
   @ Merlin Xavier
   Roll No: 44 
   08-08-25 */

#include <stdio.h>
#define SIZE 5

int front = -1, rear = -1;
int queue[SIZE], ch, e;

void enqueue() {
    if (rear == SIZE - 1) {
        printf("\nQueue overflow");
    } else {
        if (front == -1) 
			front = 0; 
        printf("\nEnter the element: ");
        scanf("%d", &e);
        queue[++rear] = e;
        printf("\n%d enqueued", e);
    }
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("\nQueue empty!");
        front = rear = -1; 
    } else {
        printf("\n%d dequeued", queue[front++]);
        if (front > rear) front = rear = -1;
    }
}

void peek() {
    if (front == -1 || front > rear) {
        printf("\nQueue is empty!");
    } else {
        printf("\n%d is at the front", queue[front]);
    }
}

void processArray() {
    do {
        printf("\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                printf("\nExiting...");
                break;
            default:
                printf("\nInvalid choice!");
        }

    } while (ch != 4);
}

int main() {
    processArray();
    return 0;
}

