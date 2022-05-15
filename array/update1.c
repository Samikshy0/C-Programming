#include <stdio.h>


int update(int arr[], int index, int update_num) {
    arr[index] = update_num;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Our array: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nDo you want to update the array? (y/n) ");
    char ch;
    scanf("%c", &ch);

    
    if(ch == 'y') {
        printf("\nEnter the index and the new value: ");
        int index, new_value;
        scanf("%d %d", &index, &new_value);
        update(arr, index, new_value);

        printf("\nUpdated array: ");
        for(int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("\nArray: ");
        for(int i = 0; i < 10; i++) {
            printf("%d ", arr[i]);
        }
    }
}