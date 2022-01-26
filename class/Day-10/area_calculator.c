#include <stdio.h>
#include <math.h>

void menu();
int triangle_area();


int main() {
    printf("Area calculator\n\n");
    menu();
    int option;
    printf("\nEnter your choice: ");
    scanf("%d", &option);
    if(option == 1) {
        //rectangle area calculation function
    }
    else if(option == 2) {
        
        triangle_area();
    }
    else if(option == 3) {
        //circle area calculation function
    }
    else if(option == 4) {
        // square area calculation function
    }
    else {
        printf("Invalid option\n");
    }

}

void menu() {
    printf("Choose 1 for rectangle\n");
    printf("Choose 2 for triangle\n");
    printf("Choose 3 for circle\n");
    printf("Choose 4 for square\n");
}

int triangle_area() {
    int a,b,c,s,area;
    printf("Enter a,b,c: ");
    scanf("%d %d %d",&a,&b,&c);
    s = (a+b+c)/2;
    area = s*(s-a)*(s-b)*(s-c);
    printf("Area of triangle is %f",sqrt(area));
}
