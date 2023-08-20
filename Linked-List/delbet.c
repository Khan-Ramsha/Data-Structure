#include <stdio.h>
#include <stdlib.h>
// Deleting the element of given index 
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
struct Node *del_in_bet(struct Node *head, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *q = (struct Node *)malloc(sizeof(struct Node));
    ptr = head;
    q = head->next;
   for (int i = 0; i < index-1; i++)
   {
        ptr = ptr->next;
        q=q->next;
    
   }
    ptr->next = q->next;
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
    second->data = 10;
    second->next = third;
    third->data = 11;
    third->next = NULL;
    head = del_in_bet(head, 1);
    traversal(head);
    return 0;
}
