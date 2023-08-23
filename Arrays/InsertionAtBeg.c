/*
A program from inserting the element at beginning 
Algorithm :
Step 1: Ask the user for the element to insert at first.
Step 2: Increase the size of array by 1.
Step 3: Run reverse for loop and shift the elements ahead and break the loop when it comes to a[0] when index becomes 0
Step 4: Insert the element asked by the user.
Step 5: Display the array.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20], inserted_el;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    printf("\nEnter Array Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element you want to insert at first: ");
    scanf("%d", &inserted_el);
    num++;

    for (i = num - 1; i >0; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[0] = inserted_el;
    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nLength %d", num);
}