#include <stdio.h>

int is_pal(int num) {
    int a = num;
    int res = 0;

    while(num!=0) {
        int rem = num % 10;
        res = res*10+rem;
        num = num / 10;
    }

    if(res == a)
        return 1;
    else
        return 0;
}

int main() {
    int a = 890;
    int check = is_pal(a);

    while(check != 1) {
        a++;
        check = is_pal(a);
    }
    printf("%d\n", a);
}