// return_type function_name();
// reurn_type = int, void, char, float, double, long, short, signed, unsigned

#include <stdio.h>
int a,b;

int add();
int subt();


int main() {
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // int a = add();
    // printf("Addition: %d\n", a);

    printf("%d", add());
    return 0;
}

int add() {
    return a+b;
}

int subt() {
    return a-b;
}
