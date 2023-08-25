#include <stdio.h>
#include <stdlib.h>
// Insertion at beginning of list
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
struct Node *insertatbeg(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
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
    traversal(head); // previous data
    head = insertatbeg(head, 15);
    traversal(head); // data after insertion at begining
    return 0;
}