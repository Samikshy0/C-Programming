#include <stdio.h>

int main() {
    int Area, width;
    printf("Enter area and width: ");
    scanf("%d %d", &Area,&width);
    if(Area <= width) {
        printf("AREa sabubele bada heba darkar");
    } 
    else {
         printf("Height is %d", Area/width);
    }
}