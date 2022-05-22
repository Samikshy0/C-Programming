#include <stdio.h>
#define MAX 20

int TOP = -1;
int stack[MAX];
int isfull(int b);
int printstack();
void menu();

int push(int a);

int main()
{
    int b;
    menu();
}

// To check stack is full or not
int isfull(int b)
{
    if (b == MAX)
    {
        printf("Stack is full\n");
        return 1;
    }
    return 0;
}

// To push element in stack
int push(int a)
{
    if (isfull(TOP + 1))
    {
        return 0;
    }
    TOP++;
    stack[TOP] = a;
    return 1;
}

// to print the stack
int printstack()
{
    int i;
    if (TOP == -1)
    {
        printf("Stack is empty\n");
        return 0;
    }
    for (i = TOP; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
    return 1;
}

// menu print function
void menu() {
    int menu;
    printf("\nEnter your choice:\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Print\n");
    printf("4. Exit\n :-");
    scanf("%d", &menu);
    if(menu == 1) {
        int a;
        printf("Enter the element to be pushed\n");
        scanf("%d", &a);
        push(a);
    }
    else if(menu == 2) {
        // printf("Element popped is %d\n", stack[TOP]);
        // TOP--;
        printf("Not supported.\n");
    }
    else if(menu == 3) {
        printstack();
    }
    else if(menu == 4) {
        printf("Exiting\n");
        return 0;
    }
    else {
        printf("Invalid choice\n");
    }
    main();
}