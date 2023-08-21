/*
A program to find duplicate number
Algorithm 
Step 1 : Ask for the elements
Step 2 : Display the elements by looping
Step 3 : Compare the elements (2 elements at a time) check if the values are equal and if the index is same
Step 4 : If index is same and values are same means Duplication is there so print values duplicate.
*/
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20], flag = 0;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }
    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }

    for (i = 0; i < num; i++)
    {
        for (int j = i + 1; j < num; j++)
        {

            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
                printf("\nDuplicates found at index %d  and %d", i ,j);
            }
    
        }
               
    }
 if (flag == 0)
        {
            printf("\nNo duplicates Found!");
        }
    return 0;
}