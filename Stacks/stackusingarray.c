#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX], top = -1;
void push()
{
    int num;
    printf("Enter Data:");
    scanf("%d", &num);
    if (top == MAX - 1)
    {
        printf("Stack Overflow.");
    }
    else
    {
        top++;
        stack[top] = num;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("Underflow");
    }
    else
    {
        item = stack[top];
        top--;
        printf("Popped Item: %d", item);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("Stack is empty");
    }
    else
    {
        printf("%d", stack[top]);
    }
}
void display()
{
    if (top == -1)
    {
        printf("Stack is Empty");
    }
    else
    {
        printf("Stack Elements are :");
        for (int i = top; i >= 0; i--)
        {
            printf("%d ", stack[i]);
        }
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
            push();
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