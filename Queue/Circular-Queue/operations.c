#include <stdio.h>
#include <stdlib.h>

#define SIZE 5 // Change the size as needed

void enQueue(int);
void deQueue();
void display();

int queue[SIZE];
int front = -1, rear = -1;

int main()
{
    int choice, value;

    while (1)
    {
        printf("\n***** MENU *****\n");
        printf("1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the value to enqueue: ");
            scanf("%d", &value);
            enQueue(value);
            break;

        case 2:
            deQueue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("\nWrong selection! Please try again.\n");
        }
    }

    return 0;
}

void enQueue(int value)
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        printf("\n QUEUE FULL \n");
    else
    {
        if (front == -1 && rear == -1)
        {
            front = 0;
            rear = 0;
        }
        else if (rear == SIZE - 1 && front != 0)
            rear = 0;
        else
            rear++;
        queue[rear] = value;
        printf("\n Value Inserted\n");
    }
}

void deQueue()
{
    if (front == -1 && rear == -1)
        printf("\n CIR QUEUE EMPTY \n");
    else
    {
        printf("\nDeleted element :%d\n", queue[front]);
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }
        else
        {
            if (front == SIZE - 1 || (front == rear && front != -1))
                front = 0;
            else
                front = front + 1;
        }
    }
}

void display()
{
    if (front == -1)
        printf("\n CIRCULAR QUEUE EMPTY\n");
    else
    {
        printf("Elements in the circular queue are: ");
        if (rear >= front)
        {
            for (int i = front; i <= rear; i++)
            {
                printf(" %d", queue[i]);
            }
        }
        else
        {
            for (int i = front; i < SIZE; i++)
            {
                printf(" %d", queue[i]);
            }
            for (int i = 0; i <= rear; i++)
            {
                printf(" %d", queue[i]);
            }
        }
        printf("\n");
    }
}
