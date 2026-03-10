#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int top = -1;

// Push Function
void push() {
    int value;
    if (top == SIZE - 1) {
        printf("Stack Overflow\n");
    } else {
        printf("Enter value to push: ");
        scanf("%d", &value);
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

// Pop Function
void pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
    } else {
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}

// Peek Function
void peek() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Top element is %d\n", stack[top]);
    }
}

// Display Function
void display() {
    if (top == -1) {
        printf("Stack is Empty\n");
    } else {
        printf("Stack elements:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int choice;

    do {
        printf("\n--- STACK MENU ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: push(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: printf("Exiting...\n"); break;
            default: printf("Invalid choice\n");
        }

    } while(choice != 5);

    return 0;
}