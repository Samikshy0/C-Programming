#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if(year%100 == 0) {
        if(year%400==0){
            printf("L year");
            return 0;
        }
        else {
            printf("not a L year");
            return 0;
        }
    }

    if (year%4 == 0) {
        printf("L year");
    }
    else {
        printf("not a L year");
    }


}