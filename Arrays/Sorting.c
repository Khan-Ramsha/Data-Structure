//A simple program to sort the array elements.
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20],temp;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    printf("\nEnter Array Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }

    printf("\nArray elements before sorting :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }

    for (i = 0; i < num-1; i++)
    {
        for (int j = i + 1; j < num; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j]=temp;
           
            }
        }

    }
     printf("\nArray elements after sorting :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
}