#include <stdio.h>
#include <stdlib.h>
//  A simple program that deletes the last node and makes the second last node as last.
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
struct Node *del_end(struct Node * head)
{
   struct Node * ptr = head;
   struct Node * q = head->next;
   while(q->next!=NULL)
   {
    ptr=ptr->next;
    q=q->next;
   }
    ptr->next = NULL;
    free(q);
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
    head->data = 5;
    head->next = second;
    second->data = 6;
    second->next = third;
    third->data = 11;
    third->next = NULL;
    head=del_end(head);
    traversal(head);
    return 0;
}
