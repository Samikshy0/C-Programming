#include <stdio.h>

int main() {
    int arr[] = {1,2,5,90};

    int largest = arr[0]; 
    int a = arr[1]; 

    for(int i = 1; i<=3; i++) {
        if(largest < a) {
            largest = a;
        }
        a = arr[i+1];
    }
    printf("largest element is %d",largest);
}