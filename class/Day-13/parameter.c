#include<stdio.h>
int para(int a,int b);

int main(){
 para(5,9);
return 0;
}

int para(int a, int b){
    printf("%d %d\n",a,b);
    return a;
}
