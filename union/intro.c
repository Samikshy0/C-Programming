#include <stdio.h>
int main() {
    union student {
        char name[20];
        int age;
        int rollno;
    } a1,a2;

    union student s1,s2,s3;

    // printf("Enter name, age and rollno of student 1: ");
    // scanf("%s%d%d",s1.name,&s1.age,&s1.rollno);

    // // display s1 details
    // printf("\nStudent 1 details:\n");
    // printf("Name: %s\n",s1.name);
    // printf("Age: %d\n",s1.age);
    // printf("Rollno: %d\n",s1.rollno);

    // print the memory space occupied by s1
    printf("\nMemory occupied by s1: %d\n",sizeof(s1));
    return 0;
}