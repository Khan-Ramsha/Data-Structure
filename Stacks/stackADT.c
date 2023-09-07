#include <stdio.h>
#include <stdlib.h>
#define MAX 10

struct Stack
{
    int items[MAX];
    int top;
};
void initialize(struct Stack *s)
{
    s->top = -1;
}
int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

int isFull(struct Stack *s)
{
    return s->top == MAX - 1;
}
void push(struct Stack *s, int num)
{

    if (isFull(s))
    {
        printf("Stack Overflow.");
    }
    else
    {
        s->top++;
        s->items[s->top] = num;
    }
}
void pop(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Underflow");
    }
    else
    {
        int items = s->items[s->top];
        s->top--;
        printf("Popped Item: %d", items);
    }
}
void peek(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d", s->items[s->top]);
    }
}
void display(struct Stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack Elements are :");
        for (int i = s->top; i >= 0; i--)
        {
            printf("%d ", s->items[i]);
        }
    }
}
int main()
{
    struct Stack stack;
    initialize(&stack);

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
            push(&stack, num);
        }
        break;
        case 2:
            pop(&stack);
            break;
        case 3:
            peek(&stack);
            break;
        case 4:
            display(&stack);
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice");
        }
    }
    return 0;
}