#include <stdio.h>
#include <stdlib.h>
// Deleting the element at First
struct Node
{
    int data;
    struct Node *next;
};
void traversal(struct Node *ptr)
{
    while (ptr!= NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node * del_beg(struct Node * head)
{
    struct Node * ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr=head;
    head = head->next;
    free(ptr);
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
    head=del_beg(head);
    traversal(head);
    return 0;
}
