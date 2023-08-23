/*
A program to delete the element by asking user for index..
Algorithm
Step 1: Ask user for index
Step 2: Run a loop to check the index if  element found at given index run another loop to shift the elements and decrease the size by 1
Step 3: If element not found at given index simply display not found!

*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20],index,found = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    printf("\nEnter Array Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the index of element you want to delete: ");
    scanf("%d", &index);
    for ( i = 0; i < num; i++)
    {
        if(i==index){
            found=1;
            break;
        }
    }
    if(found){
        for (int j = i; j < num -1; j++)
        {
            arr[j]=arr[j+1];

        }
        num--;
    }
    else{
        printf("\nElement at %d index not found!\n",index);
    }
    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nLength %d", num);
}