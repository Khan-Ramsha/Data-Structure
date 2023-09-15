// parenthesis checker
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 10

struct stack
{
    char ch[MAX];
    int top;
} s;

void push(char data)
{
    if (s.top == (MAX - 1))
    {
        printf("Stack is Full\n");
    }
    else
    {
        s.top = s.top + 1;
        s.ch[s.top] = data;
    }
}

void pop()
{
    if (s.top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        s.top = s.top - 1;
    }
}

int checkPair(char val1, char val2)
{
    return ((val1 == '(' && val2 == ')') || (val1 == '[' && val2 == ']') || (val1 == '{' && val2 == '}'));
}

int checkBalanced(char str[], int len)
{
     if (len == 0)
    {
        printf("Empty string provided\n");
        return 0; // Return false for an empty string
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            push(str[i]);
        }
        else
        {
            if (s.top == -1)
                return 0;
            else if (checkPair(s.ch[s.top], str[i]))
            {
                pop();
            }
            else
            {
                return 0;
            }
        }
    }

    // Check if the stack is empty after processing the entire string
    return s.top == -1;
}

int main()
{
    s.top = -1; // Initialize the stack top
    char str[MAX] = "{()}[]";
    int len = strlen(str);

    checkBalanced(str, len) ? printf("Balanced!/Valid Expression") : printf("Not Balanced!!!");

    return 0;
}
