#include <stdio.h>

int main() {
    int a=235;
    int arr[10];

    for(int i=0;i<10;i++){
        arr[i]=a%10;
        a=a/10;
    }

    for(int i=2;i>=0;i--){
        printf("%d ",arr[i]);
    }
}