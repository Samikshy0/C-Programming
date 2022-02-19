#include <stdio.h>

int main() {
    char var;

    printf("Enter a character: ");
    scanf("%c", &var);

    char v[10] = {'a', 'e' , 'i', 'o', 'u'};

    for(int i=0; i<=4; i++) {

        if(var == v[i]) {
            printf("v\n");
            return 0;
        }
        
    }
     printf("C");
}