#include <stdio.h>

int main() {
    int input;
    printf("Enter an number: ");
    scanf("%d", &input);
    if(input<2) {
        printf("This is not a prime number");
        return 0;
    }

    for(int i=2;i*i <= input/2;i++ ) {
        printf("%d ",i);
        if(input%i==0) {
            printf("\nThis is not a prime number");
            return 0;
        }
    }
    printf("Prime\n");
}