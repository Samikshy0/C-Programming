#include <stdio.h>
int main() {
    int arr[30];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    // printing the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("At what index you want to insert the number?\n");
    int index;
    scanf("%d", &index);
    printf("Enter the number you want to insert\n");
    int num;
    scanf("%d", &num);
    // shifting the array
    for (int i = 9; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = num;
    printf("The array after insertion is\n");
    for (int i = 0; i < 11; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}