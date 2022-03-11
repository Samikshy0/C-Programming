#include <stdio.h>

int main() {
    int a=235;
    int res = 0;
    
    while(a!=0) {
        a = a/10;
        res = res + 1;
    }
    printf("Total no of digits = %d", res);
}