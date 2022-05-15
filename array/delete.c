#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Enter the element u want to delete: ");
    int flag = 0;
    int dlt_element;
    scanf("%d", &dlt_element);

    // delete element and print the array
    for(int i=0; i<10; i++) {
        if(arr[i]==dlt_element) {
            for(int j=i; j<9; j++) {
                arr[j] = arr[j+1];
            }
            printf("Element deleted\n");
            flag = 1;
            break;
        }
    }
    if(flag) {
        for(int i=0; i<10; i++) {
            printf("%d ", arr[i]);
        }
    }
    else {
        printf("\nElement is not present");
    }
    return 0;

}