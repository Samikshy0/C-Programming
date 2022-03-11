#include <stdio.h>

int main() {
    int arr[] = {1,2,3,4,5};
    int no_of_elements = sizeof(arr) / sizeof(int);
    
    int target = 4;

    for(int i=0; i<no_of_elements; i++) {
        if(target == arr[i]) {
            printf("element found at index %d\n",i);
        }
    }
}