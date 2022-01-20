
#include <stdio.h>

int main()
{
  float height,width;
    printf("Enter height and width: ");
    scanf("%f %f", &height, &width);
    printf("Area is %.2f\n",height * width);
    printf("perimeter is %.2f\n",2*(height+width));

}