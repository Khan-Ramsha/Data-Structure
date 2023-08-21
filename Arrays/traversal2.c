/*
A program to find the smallest number from array and largest and second large
Detail Explanation
Step 1: Ask for length of array from user
Step 2: Store the array elements in arr[] declared.
STep 3: Initialize small and large var with arr[0] i.e first elemnt of arr
Step 4: Then display the elements of array by looping from 0 to less than size
Step 5: Now again loop to compare the elements of arr from the first element of arr
Step 6: If the first element is greater than the other elements i.e the arr[i] means there exists a small number . 
So put that arr[i] (that is small from element at 0 index) into the var small(taht contains first element the greater element) 
Like this each and every element will compare and if find smaller than repalce with first element.
Step 7 : Apply the logic for large element will be just opp to the logic we applied in finding small
That is compare the first element to other elements and if find that arr[0] is less than arr[i] means other elements if find greater than swap 
the values fo that we can store the greater element in var large.
Step 8: To find the second largest inintaize it with arr[1] i.e the second element, then check the number should not be large 
means the largest element wouldnt be compare. if true then check if second largest is smaller than other elemnts(elemnt not largest)
if true than swap. Simply means apart  from laregest just checking that other elemnts are greater than second_large or not if it is than replace it with greater one. 
Step 9 : Now simply print small,large, seoncd large elements.
*/
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
