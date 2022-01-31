//      Declaration of a function.
//     
//  return_type function_name(parameter_list);
//  return types: int, void, char, float, double
//  function_name: name of the function
//  parameter_list: list of parameters


#include<stdio.h>

void print_hello(); // function prototype declaration
void add(); // function prototype declaration, work: additionof two numbers

int main(){
    print_hello();

    // int a,b;
    // printf("Enter two numbers: ");
    // scanf("%d %d", &a, &b);
    // printf("Sum of %d and %d is %d\n",a,b,a+b);

    add();
    

    print_hello();
return 0;       
}

void print_hello(){
    printf("Hello Good evening !!\n");
}

void add() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum of %d and %d is %d\n",a,b,a+b);
}
