// linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

int main() {
    struct node *head,*second,*third;

    // allocate the memory
    head = (struct node*) malloc(sizeof(struct node));
    second = (struct node*) malloc(sizeof(struct node));
    third = (struct node*) malloc(sizeof(struct node));

    // 1st node or head data initialization
    head->data=7;
    head->next=second;

    // data for 2nd node
    second->data=9;
    second->next=third;

    // data for 3rd node
    third->data=5;
    third->next=NULL;

    // print node 1
    printf("%d\n",head->data);

    // updating the data of node 1
    printf("Updating the data of node 1\n");
    head->data=1;

    // print node 1
    printf("%d\n",head->data);

    // Taking user input for node 1
    printf("Enter the data for node 1: ");
    scanf("%d",&head->data);

    // print node 1
    printf("%d\n",head->data);

    return 0;
}