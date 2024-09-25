#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

int priority(char c) {
    if (c == '+' || c == '-') {
        return 0;
    } else if (c == '*' || c == '/') {
        return 1;
    } else if (c == '^') {
        return 2;
    } else {
        return -1;
    }
}

int main() {
    char exp[100];
    printf("Enter the expression: ");
    scanf("%s", exp);
    printf("Postfix expression \t:");
    int i = 0;

    while (exp[i] != '\0') {
        if ((exp[i] >= 'A' && exp[i] <= 'Z') || (exp[i] >= 'a' && exp[i] <= 'z')) {
            printf("%c", exp[i]);
        } else if (exp[i] == '(') {
            push(exp[i]);
        } else if (exp[i] == ')') {
            while (stack[top] != '(') {
                printf("%c", pop());
            }
            top--; 
        } else if (priority(exp[i]) > priority(stack[top])) {
            push(exp[i]);
        } else if (priority(exp[i]) <= priority(stack[top])) {
            if (priority(exp[i]) == priority(stack[top]) && exp[i] == '^') {
                push(exp[i]);
            } else {
            
                while (top != -1 && priority(exp[i]) <= priority(stack[top])) {
                    printf("%c", pop());
                }
                push(exp[i]);
            }
        }
        i++;
    }

    while (top != -1) {
        printf("%c", pop());
    }
	printf("\n");
    return 0;
}

