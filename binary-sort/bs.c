// binary sort algo

#include <stdio.h>

int binary_search(int *arr,int size, int target) {
    int start = 0;
    int end = size-1;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if(target < arr[mid]) {
            end = mid - 1;
        }
        else if(target > arr[mid]) {
            start = mid+1;
        }
        else {
            return mid;
        }
    }
    return -1;
    
}

int main() {
    int arr[] = {1,3,5,7,8,11,25,36};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 11;
    int index = binary_search(arr,size,target);
    if (index<0)
        printf("Element not found\n");
    else
        printf("Element %d is found at index %d\n",arr[index], index);
    
    return 0;
}