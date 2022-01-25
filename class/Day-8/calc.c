#include <stdio.h>

int a,b;

int add();
int sub();
int mul();
int div();
int rem();

int main() {
    int input;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for multiplication\n");
    printf("press 4 for division\n");
    printf("press 5 for remainder\n");
    printf("Enter 0 for exit\n");

    scanf("%d",&input);

    if(input == 1) {
        add();
        main();
    }
    else if(input == 2) {
        sub();
        main();
    }
    else if(input == 3) {
        mul();
        main();
    }
    else if(input == 4) {
        div();
        main();
    }
    else if(input == 5) {
        rem();
        main();
    }
    else if(input == 0) {
        printf("Exiting\n");
        return 0;
    }
    else {
        printf("Invalid input\n");
        main();
    }

}

int add() {
    printf("Addition is %d \n",a+b);
    return a+b;
}   

int sub() {
    printf("Subtraction is %d \n",a-b);
    return a-b;
}

int mul() {
    printf("Multiplication is %d \n",a*b);
    return a*b;
}

int div() {
    printf("Division is %d \n",a/b);
    return a/b;
}

int rem() {
    printf("Remainder is %d \n",a%b);
    return a%b;
}
