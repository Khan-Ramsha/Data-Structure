// A program to find duplicate number
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