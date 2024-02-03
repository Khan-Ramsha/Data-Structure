// Bubble sort
#include <stdio.h>
#include <stdbool.h>
void swap(int *a,int*b){
    int temp = *a;
    *a=*b;
    *b=temp;
}
int main()
{
    int a[5] = {66,1,56,2,0};
    int n = 5;
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[minIndex]>a[j])
            {
                minIndex=j;
            }
            
        }
        swap(&a[minIndex],&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
 
  
    return 0;
}
