#include <stdio.h>
#include <stdlib.h>
// The below code is used to insert the node at given index.
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertatpos(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    struct Node *head;
    struct Node *second;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    head->data = 5;
    head->next = second;
    second->data = 10;
    second->next = NULL;
    head = insertatpos(head, 12, 2);
    traversal(head);
    return 0;
}
