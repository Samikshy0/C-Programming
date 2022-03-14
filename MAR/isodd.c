#include <stdio.h>

int odd(int n);

int main() {
    int sum = 0;
    int arr[5] = {2,3,4,5,6};
    for(int i = 0; i<5; i++) {
        if(odd(arr[i])) {
            sum = sum + arr[i];
        }
    }
    printf("%d", sum);
}

int odd(int n) {
    if(n%2 == 1){
        return 1;
    }
    return 0;
}