#include <stdio.h>
#include <string.h>

int main() {
char st[] = "hellocsfsadawf";
int a = strlen(st);
//printf("length of st is %d",a);

char wish[] = "Good morning ";
char name[] = "Afrid";

strcat(wish, name);

printf("%s", wish);
}