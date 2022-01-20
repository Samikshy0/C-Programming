#include <stdio.h>

int main() {
    int area=900,side=50;
    printf("Enter area and one side: ");
    scanf("%d%d", &area,&side); 

    if(area >= side) {

        if(area/side==side) {
        printf("perfect sq");
        }
        else {
            printf("not a perfect sq");
        }
    }
    else {
        printf("Area should be bigger than side");
    }
} 
