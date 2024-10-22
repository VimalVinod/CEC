#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Queue {
    struct Node* front;
    struct Node* rear;
};

struct Queue* createQueue() {
    struct Queue* queue = (struct Queue*)malloc(sizeof(struct Queue));
    queue->front = queue->rear = NULL;
    return queue;
}

int isEmpty(struct Queue* queue) {
    return queue->front == NULL;
}

void enqueue(struct Queue* queue, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (queue->rear == NULL) {
        queue->front = queue->rear = newNode;
        return;
    }

    queue->rear->next = newNode;
    queue->rear = newNode;
}

int dequeue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue Underflow\n");
        return -1; // Indicating queue is empty
    }

    struct Node* temp = queue->front;
    int dequeuedData = temp->data;
    queue->front = queue->front->next;

    if (queue->front == NULL) {
        queue->rear = NULL;
    }

    free(temp);
    return dequeuedData;
}

int peek(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return -1; // Indicating queue is empty
    }
    return queue->front->data;
}

void displayQueue(struct Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty\n");
        return;
    }

    struct Node* temp = queue->front;
    printf("Queue elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void freeQueue(struct Queue* queue) {
    while (!isEmpty(queue)) {
        dequeue(queue);
    }
    free(queue);
}

int main() {
    struct Queue* queue = createQueue();
    int choice, data;

    while (1) {
        printf("\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display Queue\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(queue, data);
                break;
            case 2:
                data = dequeue(queue);
                if (data != -1) {
                    printf("Dequeued element: %d\n", data);
                }
                break;
            case 3:
                data = peek(queue);
                if (data != -1) {
                    printf("Front element: %d\n", data);
                }
                break;
            case 4:
                displayQueue(queue);
                break;
            case 5:
                freeQueue(queue);
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
