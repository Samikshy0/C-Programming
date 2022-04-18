#include <stdio.h>

// void add(int a, int b)
// {
//     printf("%d\n", a + b);
// }

int mul(int a, int b)
{
    printf("%d\n", a * b);
    return a * b;
}

int main() {
    // add(1, 2);
    int res;
    mul(1, 2);
    return 0;
}