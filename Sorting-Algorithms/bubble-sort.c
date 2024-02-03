// Bubble sort
#include <stdio.h>
#include <stdbool.h>
int main() {
    int temp;
    bool flag=false;
    int a[5] = {81,4,28,1,12};
    int n = 5;
    for(int i=1;i<n;i++)
{
    for(int j=0;j<n-i;j++)
    {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=true;
        }
    if(flag==false){
        break;
    }
    }
    
}
for(int i=0;i<n;i++)
{
    printf("%d\t",a[i]);
}
    return 0;
}
