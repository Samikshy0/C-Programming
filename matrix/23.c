#include <stdio.h>

int main() {
    int a[2][3],b[2][3], c[2][3];

    printf("Enter elements for 1st matrix...\n\n");
    for(int i=0;i<2;i++) {
        for(int j=0; j<3; j++) {
            printf("Enter element [%d %d]: ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("Enter elements for 2nd matrix...\n\n");
    for(int i=0;i<2;i++) {
        for(int j=0; j<3; j++) {
            printf("Enter element [%d %d]: ",i+1,j+1);
            scanf("%d", &b[i][j]);
        }
    }

    printf("Addition of two matrix\n\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    // printing the addition
    printf("Addition is.....\n\n");
    for(int i=0; i<2; i++) {
        for(int j=0; j<3; j++) {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}