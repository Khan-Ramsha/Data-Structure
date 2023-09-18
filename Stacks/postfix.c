// This is a program that gives u a view of calculating postfix expression.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int stack[20], top = -1; // An array that have size of 20.
// The below two functions are used to add and remove the element from stack
void push(int num)
{
    top++;
    stack[top] = num;
}
int pop()
{
    int y;
    y = stack[top];
    top--;
    return y;
}
int main()
{
    char exp[20];
    int i = 0, num1, num2, result;
    printf("Enter the expression: ");
    scanf("%s", exp);
    while (exp[i] != '\0')
    {
        if (isdigit(exp[i])) // if it is digit it will push onto the stack
        {
            push(exp[i] - '0'); // -"0" is used bcz the exp is in char form so int will directly not come from exp. basically it will convert into int so that +,- and other operations can be perform
        }
        else
        {
            num1 = pop();
            num2 = pop();
            switch (exp[i])
            {
            case '+':
            {
                push(num2 + num1);
                break;
            }
            case '-':
            {
                push(num2 - num1);
                break;
            }
            case '*':
            {
                push(num2 * num1);
                break;
            }
            case '/':
            {
                push(num2 / num1);
                break;
            }
            case '^':

            {
                push(pow(num2, num1)); // Use the pow function for exponentiation
                break;
            }
            }
        }
        i++;
    }
    result = pop();
    printf("\nThe postfix expression is %d", result);
    return 0;
}