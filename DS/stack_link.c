#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

struct Stack* createStack() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;
    return stack;
}

int isEmpty(struct Stack* stack) {
    return stack->top == NULL;
}

void push(struct Stack* stack, int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = stack->top;
    stack->top = newNode;
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return -1; // Indicating stack is empty
    }
    struct Node* temp = stack->top;
    int poppedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return poppedData;
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1; // Indicating stack is empty
    }
    return stack->top->data;
}

void displayStack(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    struct Node* temp = stack->top;
    printf("Stack elements:\n");
    while (temp != NULL) {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

void freeStack(struct Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
}

int main() {
    struct Stack* stack = createStack();
    int choice, data;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Peek\n4. Display Stack\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(stack, data);
                break;
            case 2:
                data = pop(stack);
                if (data != -1) {
                    printf("Popped element: %d\n", data);
                }
                break;
            case 3:
                data = peek(stack);
                if (data != -1) {
                    printf("Top element: %d\n", data);
                }
                break;
            case 4:
                displayStack(stack);
                break;
            case 5:
                freeStack(stack);
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
