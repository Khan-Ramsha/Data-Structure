/*
A program to delete the element given by user.
Algorithm
Step 1: Ask user for element
Step 2: Run a loop to check the element user wanna delete if element found then run another loop to shift the elements and decrease the size by 1
Step 3: If element not found simply display not found!

*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20], del_el, found = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    printf("\nEnter Array Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the element you want to delete: ");
    scanf("%d", &del_el);
    for (i = 0; i < num; i++)
    {
        if (arr[i] == del_el)
        {
            found = 1;
            break; // if element found no need to search more
        }
    }
    if (found)
    {
        for (int j = i; j < num - 1; j++)
        {
            arr[j] = arr[j + 1];
        }
        num--;
    }
    else
    {
        printf("\nElement %d not found !\n", del_el);
    }
    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nLength %d", num);
}