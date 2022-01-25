#include <stdio.h>

int triangle();

int main()
{
    int choice;
    printf("Area Calculator\n\n");
    printf("1: Triangle\n2: Rectangle\n3: Circle\n4: Square \n5: Exit\n\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1) {
        // printf("Triangle\n");
        triangle();
        main();
    }
    else if(choice==2) {
        printf("Rectangle\n");
    }
    else if(choice==3) {
        printf("Circle\n");
    }
    else if(choice==4) {
        printf("Square\n");
    }
    else if(choice==5) {
        printf("Exit\n");
    }
    else {
        printf("Invalid choice\n");
    }
}

int triangle() {

    int var;
    printf("1: calculate through height and base\n2: calculate through side\n");
    printf("Enter your choice: ");
    scanf("%d", &var);
    if(var==1) {
        int height,base;
        printf("Enter the height of the triangle: ");
        scanf("%d", &height);
        printf("Enter the base of the triangle: ");
        scanf("%d", &base);
        int area = (height*base)/2;
        printf("The area of the triangle is %d\n", area);
        triangle();
    }
    else if(var == 2) {
        // code for calculate through side
    }
    else {
        printf("Invalid choice\n");
    }
}
