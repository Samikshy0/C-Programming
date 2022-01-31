#include<stdio.h>

int sum();

int main(){
    int catch;
    catch = sum();
    printf("After mul 5 res is %d\n", catch*5);
return 0;
}

int sum() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("SUm is %d",a+b);
    return a+b;
}
