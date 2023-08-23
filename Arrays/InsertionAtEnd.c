/*
A program for inserting elemnt at end
A very simple program that doesnt require any for loop. It just insert the element at last .
Algorithm
Step 1 : Ask for length and elements
Step 2: Ask for element user want at last
Step 3: Increase the size of array by 1 and simply initialze that block of array by the inserted element.
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

    printf("\nEnter the element you want to insert at end: ");
    scanf("%d", &inserted_el);

    num++;
    arr[num - 1] = inserted_el;

    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\n Length %d", num);
}