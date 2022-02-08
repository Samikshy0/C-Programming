#include <stdio.h>
int add10(int a);
int main() {
   for(int i=1; i<=5;i++) {
       add10(i);
   }
}

int add10(int a) {
    printf("%d\n",a+10);
}