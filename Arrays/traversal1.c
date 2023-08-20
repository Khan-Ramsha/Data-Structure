// A program to read and dsiplay the array elements and print the sum and avg of array elements
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i , arr[20], num,sum=0;
    float avg=0.0;
    printf("Enter the length of the array: ");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        printf("\n arr[%d]",i);
        scanf("%d",&arr[i]);
            
    }
    printf("Array elements are :");
    for(i=0;i<num;i++)
    {
        printf("\t%d",arr[i]);
    }
     for(i=0;i<num;i++)
    {
        sum = sum + arr[i];

    }
        avg = (float) sum/num;

    printf("\tSum : %d" , sum);
    printf("\tAvg : %.2f" , avg);

return 0;
}