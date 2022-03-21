#include <stdio.h>

int is_pal(int num);

int main() {
    int input = 98;
    printf("Enter a number: ");
    scnaf("%d", &input);

    if(is_pal(input))
        printf("Palendrome\n");
    else
        printf("not palendrome\n");

}

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