#include <stdio.h>

void main() {
    int arr[5], sum = 0;
    
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    printf("Sum of digit %d", sum);
}