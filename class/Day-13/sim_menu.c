#include<stdio.h>

void menu();

int main(){
    menu();
int input;

printf("Enter your choice: ");
scanf("%d", &input);

if(input == 1){
    printf("add\n");
}
else if(input == 2){
    printf("sub\n");
}
else if(input == 3){
    printf("mul\n");
}
else if(input == 4){
    printf("dv\n");
}
else if(input == 5){
    printf("exi\n");
}
else{
    printf("Invalid input\n");
}
return 0;
}

void menu() {
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Exit\n");
}
