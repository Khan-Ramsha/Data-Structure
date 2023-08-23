#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    int i, num, arr[20], ch;
    printf("Enter the length of the array: ");
    scanf("%d", &num);
    printf("\nEnter Array Elements: ");
    for (i = 0; i < num; i++)
    {
        printf("\n arr[%d]\t", i);
        scanf("%d", &arr[i]);
    }
    printf("\n Type Y to delete element at end: ");
    scanf("\n%c",&ch);
    switch (ch)
    {
    case 'Y':
       case 'y':
        num--;
        break;
    case 'N':
       case 'n':
        break;
    default:
    printf("\nInvalid Input!!");
       return 1; //Exit the program with an error code
    }

    printf("Array elements are :");
    for (i = 0; i < num; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nLength %d", num);
}