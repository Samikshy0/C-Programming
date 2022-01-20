#include "stdio.h"

int main() {
    float r,res,pi=3.141;
    printf("ENter the value of r: ");
    scanf("%f", &r);
    res = pi * r * r;
    printf("result is %.2f", res);
}