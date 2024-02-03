#include <stdio.h>
void insertion_sort(int arr[],int n)
{ 
int key,j;
for(int i=1;i<n;i++) 
// start the loop from 2nd element as 1st element is considered as sorted array
{
    key=arr[i]; //store the 2nd element in key var
    j=i-1;    //1st element (last element of sorted array) stored in j
    while(arr[j] > key && j>=0) //compare the elements
    {
       arr[j+1]=arr[j];
       j=j-1; //check for previous elements in sorted array
    }
    arr[j + 1] = key;   
}
}
int main()
{                
                
 int arr[20] = {7,1,3,5,2};
 insertion_sort(arr,5);
 printf("Sorted array: ");
for (int i = 0; i < 5; i++)
{
  printf("%d ", arr[i]);
}
return 0;
    
}