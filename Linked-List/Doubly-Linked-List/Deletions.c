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
struct Node *delatbeg(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
struct Node *delatend(struct Node *head)
{
    struct Node *ptr = head;
    struct Node *q = ptr->next;
    while(q->next!=NULL){
        q=q->next;
        ptr=ptr->next;
    }
    ptr->next=NULL;
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
    head = delatend(head);
    traversal(head);
    return 0;
}