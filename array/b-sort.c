#include <stdio.h>

int swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int arr[] = {1,7,4,8,2};
    // print the array
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    // sorting the array
    for (int i = 0; i < 5; i++)
    {
        for(int j=0; j<5;j++) {
            if(arr[i]<arr[j]) {
                swap(&arr[i], &arr[j]);
            }
        }
    }
    // print the array
    printf("The sorted array is: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}