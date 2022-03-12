#include <stdio.h>

int main() {
    int arr[1000];
    int user_nums;

    printf("Enter the no of elements: ");
    scanf("%d", &user_nums);

    for(int i = 0; i < user_nums; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = arr[0]; 
    int a = arr[1]; 

    for(int i = 1; i<user_nums; i++) {
        if(largest < a) {
            largest = a;
        }
        a = arr[i+1];
    }
    printf("largest element is %d",largest);
}