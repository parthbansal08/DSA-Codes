//Largest and smallest elements of an array
#include<stdio.h>

int main_1_1()
{
    int i,n;
    printf("Enter the no of terms in an array:\n");
    scanf("%d",&n);
    int a[n];
    
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter term %d\n",i);
        scanf("%d",&a[i]);
    }
    int gr=a[0];
    int sm=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>gr)
        gr=a[i];
        if(a[i]<sm)
        sm=a[i];
    }
    printf("Greatest term in array is %d\n",gr);
    printf("Smallest term in array is %d",sm);
    return 0;
}