#include<stdio.h>
int main(){
    int a[4];
    printf("Enter 4 numbers: ");
    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);
    printf("Sum of 4 num is %d", a[0]+a[1]+a[2]+a[3]);
return 0;
}
