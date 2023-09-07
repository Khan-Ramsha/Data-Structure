#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = 0; // *top=NULL
void push(int num)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = num;
    ptr->next = top;
    top = ptr;
}
void pop()
{
    struct Node *p = top;
    if (top == 0)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("%d", top->data);
        top = top->next;
        free(p);
    }
}
void display()
{
    struct Node *temp = top;
    if (top == 0)
    {
        printf("Stack is empty.");
    }
    else
    {   printf("Elements of stack are:");
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next; // Move to the next node
        }
    }
}
void peek()
{
    if (top == 0)
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("%d", top->data);
    }
}
int main()
{
    int choice;
    while (1)
    {
        printf("\n 1 Push\n");
        printf("\n 2 Pop\n");
        printf("\n 3 Peek\n");
        printf("\n 4 Display\n");
        printf("\n 5 Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

        {
            int num;
            printf("Enter Data: ");
            scanf("%d", &num);
            push(num);
        }
        break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}