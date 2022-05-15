#include <stdio.h>


int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Array before update: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    int update_num = 59, index=3;
    arr[index] = update_num;
    
    printf("\nArray after update: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
}