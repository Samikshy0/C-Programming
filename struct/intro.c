#include <stdio.h>
int main() {
    struct student {
        char name[20];
        int age;
        int rollno;
    };

    struct student s1,s2,s3;

    // printf("Enter name, age and rollno of student 1: ");
    // scanf("%s%d%d",s1.name,&s1.age,&s1.rollno);

    // s2.age = 61;
    // s2.name[20] = "sachin";
    // // print s1 details

    // printf("\nStudent 1 details:\n");
    // printf("Name: %s\n",s1.name);
    // printf("Age: %d\n",s1.age);
    // printf("Rollno: %d\n",s1.rollno);

    struct emp {
        char nm[20];
        int age;
        int salary;
    } e1,e2,e3;

    // Print student 1
    // printf("Student 1: %s, %d, %d\n", s1.name, s1.age, s1.rollno);
    // print size of s1

    printf("\nMemory occupied by s1: %d\n",sizeof(s1));
    return 0;
}