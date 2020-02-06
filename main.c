#include <stdio.h>
#include <stdbool.h>

#define stacklenght 5

int counter = 0;

void push(int stack[stacklenght]);
void pop(int stack[stacklenght]);
int top(int stack[stacklenght]);
bool empty(int stack[stacklenght]);
int size(int stack[stacklenght]);
int length(int stack[stacklenght]);
void reset(int stack[stacklenght]);
void delete(int stack[stacklenght]);

int main(void){
    int choice;
    int stack[stacklenght];

    do {
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. top\n");
        printf("4. empty\n");
        printf("5. size\n");
        printf("6. length\n");
        printf("7. reset\n");
        printf("8. delete\n");
        printf("9. exit\n");

        scanf("%d", &choice);
        switch (choice) {
            case 1:
                push(stack);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                top(stack);
                break;
            case 4:
                empty(stack) ? printf("\nThe stack is empty\n") : printf("\nThe stack is not empty\n");
                break;
            case 5:
                size(stack);
                break;
            case 6:
                length(stack);
                break;
            case 7:
                reset(stack);
                break;
            case 8:
                delete(stack);
                break;
            case 9:
                printf("\nexit\n");
                break;
            default:
                printf("Wrong Input");
                break;
        }

    }while(choice != 9);
}

void push(int *stack) {
    if (counter >= stacklenght){
        printf("\nThe stack is full\n");
    } else {
        int temp;
        printf("\nEnter a number to be put onto the stack\n");
        scanf("%d", &temp);
        stack[counter] = temp;
        ++counter;
    }
}

void pop(int *stack) {
    if (empty(stack)){
        printf("\nThe stack is empty\n");
    } else {
        --counter;
        printf("\nYou took %d from the stack\n", stack[counter]);
    }
}

int top(int *stack) {
    printf("\n%d is on on top of your stack\n", stack[counter-1]);
}

bool empty(int *stack) {
    if (counter <= 0) {
        return true;
    } else {
        return false;
    }
}

int size(int *stack) {
    printf("\nThe max size of the stack is %d\n", stacklenght);
}

int length(int *stack) {
    printf("\nThe stack is %d/%d full\n", counter, stacklenght);
}

void reset(int *stack) {
    printf("\nStack reset\n");
    counter = 0;
}

void delete(int *stack) {
    printf("\nStack deleted\n");
    counter = 0;
    for (int i = 0; i < stacklenght; ++i) {
        stack[i] = 0;
    }
}