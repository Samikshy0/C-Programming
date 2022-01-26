#include <stdio.h>

int o(int one,int two);

int msg() {
    printf(" choose 1 for addition\n");
    printf(" choose 2 for subtraction\n");
    printf(" choose 3 for multiplication\n");
}
int main() {
    int a=6;
    int b=7;

    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
    o(a,b);
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
}

int o(int one,int two) {
    printf("Value of one is %d\n",one);
    printf("Value of two is %d\n",two);
    printf("Changing the value of one and two\n");
    one = one + 10;
    two = two + 10;
    printf("Value of one is %d\n",one);
    printf("Value of two is %d\n",two);
}
