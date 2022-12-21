//Store n elements in an array and reverse them
#include <stdio.h>

int main_1_2()
{
    int i,j,n,t;
    printf("Enter no of terms in array:\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of array:\n");
    for(i=0;i<n;i++)
    {
        printf("Enter term %d\n",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("Elements of array in reverse order are\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);

    return 0;
}


