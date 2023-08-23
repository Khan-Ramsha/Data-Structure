/*
A program to insert the element at specific position. This program allows you to insert element at any index but this code doesnot
if u want to insert element at last. You definitely can insert at last index.
Algorithm:
Step 1: Ask for array length
Step 2 Ask for elements
Step 3: Ask for element user wish to insert and also the index at user wishes to insert.
Step 4: Run a reverse loop that would shift the elements ahead, this loop will only travel till  the index is provided
for eg if index provided is 2 then loop will travel till 2 only when it reaches 2 shift the 2nd index element and control moves out of loop
then element will be inserted
Step 5: Increasing the size of array by 1.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20], inserted_el, index;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    printf("\nEnter Array Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element you want to insert: ");
    scanf("%d", &inserted_el);
    printf("\nEnter the index of element you want to insert: ");
    scanf("%d", &index);
    for (i = num - 1; i >= index; i--)
    {
        arr[i + 1] = arr[i];
    }

    arr[index] = inserted_el;
    num++;
    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
        printf("\nLength %d", num);

}