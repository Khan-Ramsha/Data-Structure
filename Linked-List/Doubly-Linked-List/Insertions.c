#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    printf("Elements are:\n");

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertatbeg(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node)); // a new node
    ptr->next = head;
    ptr->data = data;
    ptr->prev = NULL;
    head->prev = ptr;
    head = ptr;
    return head;
}
struct Node *insertatend(struct Node *head, int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node)); // a new node
    struct Node *p = head;
    new_node->next = NULL;
    new_node->data = data;
    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new_node;
    return head;
}
struct Node *insertatpos(struct Node *head, int data, int index)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node)); // a new node
    struct Node *traverse_var = head;
    int i = 0;
    while (i != index - 1)
    {
        traverse_var = traverse_var->next;
        i++;
    }
    p->next = traverse_var->next;

    traverse_var->next = p;
    p->prev = traverse_var;
    p->data = data;
    return head;
}
int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    head->next = second;
    head->prev = NULL;
    head->data = 1;
    second->next = third;
    second->prev = head;
    second->data = 2;
    third->prev = second;
    third->data = 3;
    third->next = NULL;
    traversal(head);
    head = insertatbeg(head, 3);
    head = insertatend(head, 10);
    head = insertatpos(head, 11, 1); // index should not be 0 it does not work for inserting at beginning.
    traversal(head);
    return 0;
}