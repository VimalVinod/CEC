#include <stdio.h>

void main() {
    int size, val, choice = 0, i;
    printf("Enter the size of C Queue: ");
    scanf("%d", &size);
    int my_q[size];
    int front = -1, rear = -1;

    while (choice != 4) {
    	printf("CIRCULAR QUEUE\n ");
        printf("___MAIN MENU___\n 1.Enqueue\n 2.DISPLAY\n 3.Dequeue\n 4.EXIT\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if ((rear + 1) % size == front) {
                    printf("Queue overflow!!!!\n");
                } else {
                    printf("Enter the element: ");
                    scanf("%d", &val);

                    if (front == -1 && rear == -1) {
                        front = rear = 0;
                    } else {
                        rear = (rear + 1) % size;
                    }
                    my_q[rear] = val;
                    printf("The element %d is added!!\n", val);
                }
                break;

            case 2:
                if (front == -1) {
                    printf("Empty queue\n");
                } else {
                    printf("Queue elements .....\t");
                    for (i = front; i != rear; i = (i + 1) % size) {
                        printf("%d\t", my_q[i]);
                    }
                    
                    printf("%d\n", my_q[rear]);
                }
                break;

            case 3:
                if (front == -1) {
                    printf("Queue underflow!!!!\n");
                } else {
                    printf("The element %d is Dequeued!!\n", my_q[front]);
                    if (front == rear) {
                       
                        front = rear = -1;
                    } else {
                        front = (front + 1) % size;
                    }
                }
                break;

            case 4:
                printf("Exiting!!!!\n");
                break;

            default:
                printf("Invalid Choice!!\n");
                break;
        }
    }
}

