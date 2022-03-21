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
    int arr[] = {11,22,33,44,55};
    int b = 0;

    int as = sizeof(arr) / sizeof(int);

    for(int i = 0; i < as; i++) {
        if(is_pal(arr[i]))
            b++;
    }

    if(b == as)
        printf("Good array\n");
    else 
        printf("Bad array\n");
}