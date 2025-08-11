/* Demonstrate queue using array.
   @ Merlin Xavier
   Roll No: 44 
   08-08-25 */

#include <stdio.h>
#define SIZE 5

int front = -1, rear = -1;
int queue[SIZE], ch;

void enqueue(int val) {
    if ((rear + 1) % SIZE == front) {
        printf("Queue is full\n");
        return;
    }
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = val;
    printf("%d enqueued.\n", val);
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }
    printf("Dequeued: %d\n", queue[front]);
    if (front == rear) {
        front = rear = -1;  // Queue is now empty
    } else {
        front = (front + 1) % SIZE;
    }
}

void peek() {
    if (front == -1) {
        printf("Queue is empty!\n");
    } else {
        printf("%d is at the front\n", queue[front]);
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty!\n");
        return;
    }

    printf("Queue elements: ");

    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}

void processArray() {
    int val;
    do {
        printf("\n\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display Queue\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &val);
                enqueue(val);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice!\n");
        }

    } while (ch != 5);
}

int main() {
    processArray();
    return 0;
}

