//WAP to sort an array of n numbers.
#include <stdio.h>

int main_1_4()
{
    int n,i,j,temp;
    printf("Enter no of elements in an array: ");
    scanf("%d",&n);
    int m[n];
    printf("Enter the integers of array: \n");
    for(i=0;i<n;i++)
        scanf("%d",&m[i]);

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
         if(m[j]>m[j+1])
         {
             temp = m[j];
             m[j]=m[j+1];
             m[j+1]=temp;
         }
    }
    
    printf("Elements of array sorted in ascending order are:");
    for(i=0;i<n;i++)
    printf("%d ",m[i]);
    
    return 0;
}