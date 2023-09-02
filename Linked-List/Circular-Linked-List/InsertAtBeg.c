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
struct Node *insertatbeg(struct Node *head, int data)
{
    struct Node *p;
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data; //insert the data in ptr(a new node)
    p=head->next; //points 2nd element to a pointer p in order to traverse
    while (p->next != head) //moves till the last element
    {
        p = p->next;  
    }
    p->next = ptr; //link the newly created node to the last node
    ptr->next = head; //now link the newly created node to the node which was first node
    head=ptr; //now make the ptr (newly inserted node) a head node that is first node.
    return head; //return head for traversal
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
    traversal(head);
    head = insertatbeg(head, 2);
    traversal(head);
    return 0;
}