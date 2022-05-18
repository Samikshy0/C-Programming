#include <stdio.h>
int main() {
    int arr[] = {1,3,5,6,7,9};
    // print the array
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("Enter the index you want to update: \n");
    int index;
    scanf("%d", &index);
    printf("Enter the number you want to update: \n");
    int num;
    scanf("%d", &num);
    arr[index] = num;
    printf("The array after update is: \n");
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}