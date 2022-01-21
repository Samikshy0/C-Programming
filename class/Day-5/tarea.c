#include <stdio.h>
#include <math.h>

int main() {
    
    int a,b,c,s,area;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    s = (a+b+c)/2;
    area = s*(s-a)*(s-b)*(s-c);
    printf("Area of triangle is %f",sqrt(area));
    return 0;
}
