#include <stdio.h>

int is_prime(int n);

int main() {
    int arr[1000]={3,6,3,5,10}, input=5;
    // printf("Enter the number of elements: ");
    // scanf("%d", &input);

    // for(int i=0; i<input; i++) {
    //     scanf("%d", &arr[i]);
    // }

    //for checking each elements
    for(int i=0; i<input; i++) {
        if(is_prime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
}

int is_prime(int n) {
    if(n<=1) {
        return 0;
    }
    for(int i=2; i<=n/2; i++) {
        if(n%i == 0) {
            return 0;
        }
    }
    return 1;
}