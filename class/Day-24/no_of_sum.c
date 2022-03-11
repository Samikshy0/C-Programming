#include <stdio.h>

int main() {
    int how_many_times, p1, p2, sum = 0;
    printf("Enter num: ");
    scanf("%d", &how_many_times);
    int arr[1000];
    for(int i = 0; i < how_many_times; i++) {
        scanf("%d",&p1);
        scanf("%d",&p2);
        arr[i] = p1 + p2;
    }
    for(int i = 0; i < how_many_times; i++) {
        printf("%d\n", arr[i]);
        sum = sum + arr[i];
    }
    printf("\nSum is: %d", sum);
}