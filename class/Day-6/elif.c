#include <stdio.h>
#include <math.h>

int main() {
    
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    if(a <=10 && a>=1)
    printf("The value of a is between 1 and 10");
    else if(a<=20 && a>=11)
    printf("The value of a is between 11 and 20");
    else if(a<=30 && a>=21)
    printf("The value of a is between 21 and 30");
    else if(a<=40 && a>=31)
    printf("The value of a is between 31 and 40");
    else
    printf("The value of a is greater than 40");


    return 0;
}
