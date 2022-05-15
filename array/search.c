#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Enter the element u want to search: ");
    int search_element;
    scanf("%d", &search_element);

    for(int i=0; i<10; i++) {
        if(arr[i]==search_element) {
            printf("Element found at index %d",i);
            return 0;
        }
    }
    printf("Element is not present");
}