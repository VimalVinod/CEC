#include <stdio.h>
#include <stdlib.h>

#define MAX 50

int arr[MAX];
int front = -1;
int rear = -1;
int maxSize = MAX; 

int isEmpty() {
    return front == -1;
}

int isFull() {
    return (rear + 1) % maxSize == front;
}

void insertFront(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        front = (front - 1 + maxSize) % maxSize;
    }
    arr[front] = value;
}

void insertRear(int value) {
    if (isFull()) {
        printf("Deque is full!\n");
        return;
    }
    if (isEmpty()) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % maxSize;
    }
    arr[rear] = value;
}

int deleteFront() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return -1;
    }
    int value = arr[front];
    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % maxSize;
    }
    return value;
}

int deleteRear() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return -1;
    }
    int value = arr[rear];
    if (front == rear) {
        front = rear = -1;
    } else {
        rear = (rear - 1 + maxSize) % maxSize;
    }
    return value;
}

void display() {
    if (isEmpty()) {
        printf("Deque is empty!\n");
        return;
    }
    int i = front;
    while (1) {
        printf("%d ", arr[i]);
        if (i == rear) break;
        i = (i + 1) % maxSize;
    }
    printf("\n");
}

int main() {
    int choice, value;
    printf("Enter the size of the Queue (max %d): ", MAX);
    scanf("%d", &maxSize);

    if (maxSize > MAX) {
        printf("Size exceeds maximum limit of %d.\n", MAX);
        return 1;
    }

    while (1) {
        printf("1. Insert Front\n2. Insert Rear\n3. Delete Front\n4. Delete Rear\n5. Display\n6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert at front: ");
                scanf("%d", &value);
                insertFront(value);
                break;
            case 2:
                printf("Enter value to insert at rear: ");
                scanf("%d", &value);
                insertRear(value);
                break;
            case 3:
                value = deleteFront();
                if (value != -1) printf("Deleted from front: %d\n", value);
                break;
            case 4:
                value = deleteRear();
                if (value != -1) printf("Deleted from rear: %d\n", value);
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}

