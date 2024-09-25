#include <stdio.h>
#include <string.h>


#define SIZE 50

char stack[SIZE];
int top = -1;

void push(char c) {
    if (top == SIZE - 1) {
        printf("Stack overflow\n");
        exit(1);
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1) {
        printf("Stack underflow\n");
        
    }
    return stack[top--];
}

void reverseString(char *str) {
    int length = strlen(str);

    for (int i = 0; i < length; i++) {
        push(str[i]);
    }

    printf("Reversed string: ");
    while (top != -1) {
        printf("%c", pop());
    }
    printf("\n");
}

int main() {
    char str[SIZE];

    printf("Enter a string: ");
    scanf("%s", str);  
    
    reverseString(str);
    
    return 0;
}

