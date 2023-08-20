// A program to find the smallest number from array and largest
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i , arr[20], num,small,large;
    printf("Enter the length of the array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("\n arr[%d]",i);
        scanf("%d",&arr[i]);
            
    }
       small,large=arr[0];
    printf("Array elements are :");
    for(i=0;i<num;i++)
    {
        printf("\t%d",arr[i]);
    
    }
 
    for(i=0;i<num;i++)
    {
        if(small > arr[i])
        {
        small=arr[i];

        }
        else if(large < arr[i])
        {
            large=arr[i];
        }
    }
    printf("\tSmall %d", small);
    printf("\tlarge %d", large);

return 0;
    }
