
// linked list addition

#include <stdio.h>
#include <stdlib.h>
int prime(int a)
{
    int i;
    for (i = 2; i <= a / 2; ++i)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *second, *third, *fourth;

    // allocate the memory
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // assign values
    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 4;
    third->next = fourth;

    fourth->data = 2;
    fourth->next = NULL;

    struct node *temp1 = head;
    int sum = 0;
    while (temp1 != NULL)
    {
        if (prime(temp1->data))
        {
            sum += temp1->data;
        }
        temp1 = temp1->next;
    }
    printf("%d\n", sum);

    struct node *temp2 = head;
    int no_of_nodes = 0;
    while (temp2 != NULL)
    {
        no_of_nodes++;
        temp2 = temp2->next;
    }
    printf("%d\n", no_of_nodes);

    return 0;
}
