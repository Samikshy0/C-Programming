// Stack operations

#include <stdio.h>
#include <stdlib.h>
#define MAX 5

int stack[MAX];
int top = -1;


int push(int a);
int isfull();
int menu();
int pop();
int display();

int main() {
    int choice, element;
    menu();
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the element to be pushed: ");
            scanf("%d", &element);
            push(element);
            if(isfull())
                printf("Stack is full\n");
            else
                printf("%d is pushed\n\n", element);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice\n");
            main();
    }
    main();
    return 0;
}

int menu() {
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

}
int push(int a) {
    if(isfull()) {
        printf("error: stack is full");
        exit(0);
    }
    else {
        top ++;
        stack[top] = a;
        return a;
    }
}
int pop() {
    return 0;
}
int isfull() {
    if(MAX <= top) 
        return 1;
    else
        return 0;
}


//  bug when stack is full

int display() {
    int i;
    if(top == -1) {
        printf("Stack is empty\n");
        return 0;
    }
    else {
        for(i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}