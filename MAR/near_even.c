#include <stdio.h>
int pal(int a);
int main() {
    int a = 3789;

    int b = 1;

    while(b) {
        if(a%2==1) {
            a ++;
        }
        else {
            printf("%d", a);
            b = 0;
        }
    }


}