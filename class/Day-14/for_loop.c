#include<stdio.h>

int main(){
int sum=0,input;
printf("Enter 5 number: ");

for(int i=1;i<=5;i++) {
    scanf("%d",&input);
    sum = sum + input;
}
printf("Sum of 5 number is: %d",sum);
return 0;
}
