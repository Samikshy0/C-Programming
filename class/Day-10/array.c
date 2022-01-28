#include <stdio.h>

int main() {
    // data_type name[size];
    
    // int u[5];
    // u[4] = {1,2,3,4,5}; => This will give you an error

    // u[0] = 1;
    // u[1] = 2;
    // u[2] = 3;
    // u[3] = 4;
    // u[4] = 5;



    int u[5] = {1,2,3,4,5};
    // printf("value at index 0 is: %d\n", u[0]);
    // printf("value at index 1 is: %d\n", u[1]);
    // printf("value at index 2 is: %d\n", u[2]);
    // printf("value at index 3 is: %d\n", u[3]);
    // printf("value at index 4 is: %d\n", u[4]);

    for(int i=0; i<5; i++) {
        printf("Value at index %d is: %d\n",i,u[i]);
    }

}
