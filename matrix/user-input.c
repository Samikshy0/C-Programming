#include<stdio.h>
int main()
{
  int a[2][2], b[2][2];
  
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

//   print the matrix

    printf("\n\nThe first matrix is:\n\n");
    for(int i=0;i<2;i++) {
        for(int j=0; j<2; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\nThe second matrix is:\n\n");
    for(int i=0;i<2;i++) {
        for(int j=0; j<2; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}