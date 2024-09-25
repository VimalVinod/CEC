#include<stdio.h>

int isFull(int top, int size) {
    return top == size - 1;
}

int isEmpty(int top) {
    return top == -1;
}

void main() {
    int size, val, choice;
    printf("Enter the size of stack: ");
    scanf("%d", &size);
    int my_stack[size];
    int top = -1;

    while(choice != 5) {
        printf("\nMAIN MENU\n 1.PUSH\n 2.DISPLAY\n 3.POP\n 4.PEEK\n 5.EXIT\n");
        printf("Enter the choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1: 
                if(isFull(top, size)) {
                    printf("Stack overflow!!!!\n");
                } else {
                    printf("Enter the element: ");
                    scanf("%d", &val);
                    top = top + 1;
                    my_stack[top] = val;
                    printf("The element %d is pushed!!\n", val);
                }
                break;
                
            case 2: 
                if(isEmpty(top)) {
                    printf("Stack underflow!!!!\n");
                } else {
                    printf("Stack Elements are..\n");
                    for (int i = top; i >= 0; i--) {
                        printf("%d\t", my_stack[i]);
                    }
                    printf("\n");
                }
                break;
                
            case 3: 
                if(isEmpty(top)) {
                    printf("Stack underflow!!!!\n");
                } else {
                    printf("The element %d is popped!!\n", my_stack[top]);
                    top--;
                }
                break;
                
            case 4: 
                if(isEmpty(top)) {
                    printf("Stack underflow!!!!\n");
                } else {
                    printf("%d is the peeked element !!\n", my_stack[top]);
                }
                break;
                
            case 5: 
                printf("Exiting!!!!\n");
                break;
                
            default: 
                printf("Invalid Choice!!\n");
                break;
        }
    }
}

