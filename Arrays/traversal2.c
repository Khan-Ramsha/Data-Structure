// A program to find the smallest number from array and largest and second large
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, arr[20], num, small, large, second_large;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }
    small, large = arr[0];
    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }

    for (i = 0; i < num; i++)
    {
        if (small > arr[i])
        {
            small = arr[i];
        }
        if (large < arr[i])
        {
            large = arr[i];
        }
    }
        second_large = arr[1];

for ( i = 0; i < num; i++)
{
     if (arr[i] != large)
        {
            if (second_large < arr[i])
            {
                second_large = arr[i];
            }
        }
}

    
    printf("\tSmallest element %d", small);
    printf("\tLargest element %d", large);
    printf("\tSecond Large %d", second_large);

    return 0;
}
