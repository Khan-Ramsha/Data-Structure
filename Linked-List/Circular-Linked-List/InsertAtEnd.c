#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    printf("Elements are:\n");
    do
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct Node *insertatend(struct Node *head, int data)
{

    struct Node *p;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data; // insert the data in ptr(a new node)
    p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }

    ptr->next = head;
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
    second->next = head;
    head = insertatend(head, 11);
    traversal(head);
    return 0;
}