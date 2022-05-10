#include<stdio.h>

int main() {
    // declaring variables

     printf("Enter elements for 1st matrix...\n\n");
    int a[2][2], b[2][2], add[2][2];
    for(int i=0;i<2;i++) {
      for(int j=0; j<2; j++) {
          printf("Enter element [%d %d]: ",i+1,j+1);
          scanf("%d", &a[i][j]);
      }
  }

    printf("Enter elements for 2nd matrix...\n\n");
  for(int i=0;i<2;i++) {
      for(int j=0; j<2; j++) {
          printf("Enter element [%d %d]: ",i+1,j+1);
          scanf("%d", &b[i][j]);
      }
  }

//   Addition of two matrix
  for(int i=0; i<2; i++) {
      for(int j=0; j<2; j++) {
          add[i][j] = a[i][j] + b[i][j];
      }
  }

//   printing the addition
    printf("Addition is.....\n\n");
  for(int i=0; i<2; i++) {
      for(int j=0; j<2; j++) {
          printf("%d\t", add[i][j]);
      }
      printf("\n");
  }
}