// Adding numbers in an array

#include <stdio.h>

int main() {
    int x[5] = {1,2,3,4,5};

    int sum=0;

    for(int i=0;i<5;i++) {
        sum = sum + x[i];
    }
    printf("%d", sum);

}