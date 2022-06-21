// linked list

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void print_ll(struct node *ptr)
{
    if (ptr == NULL)
    {
        printf("Linked list is empty\n");
    }

    while (ptr != NULL)
    {

        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
    printf("Success\n");
    
}

struct node * i_head(struct node *head,int a) {
    struct node *element = (struct node*)malloc(sizeof(struct node));
    element -> data = a;
    element -> next = head;

    return element;
}

int main()
{

    struct node *head, *second, *third, *fourth;

    // allocate the memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // 1st node or head data initialization
    head->data = 7;
    head->next = second;

    // data for 2nd node
    second->data = 9;
    second->next = third;

    // data for 3rd node
    third->data = 5;
    third->next = fourth;

    // data for 4th node
    fourth->data = 3;
    fourth->next = NULL;

    print_ll(head);

    head = i_head(head, 71);

    print_ll(head);

    head = i_head(head, 89);
    print_ll(head);
    return 0;
}