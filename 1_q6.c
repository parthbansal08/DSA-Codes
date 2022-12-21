#include <stdio.h>

int main_1_6()
{
    int n,ns,nge;
    printf("Enter no of elements in array: ");
    scanf("%d",&n);
    
    int i,j,a[n];
    printf("Enter the integers of array: \n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    printf("NGE of every element in array is: \n");
    for(j=0;j<n;j++)
    {
        ns = a[j];
    for(i=j;i<n;i++)
    {
        if(a[i]>ns){
        nge = a[i];
        break;
        }
        else
        nge = -1;
    }
    printf("%d = %d \n",a[j],nge);
    }
    
    return 0;
}