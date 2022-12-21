//21051667 Parth Bansal
//WAP to read a 1-D array, print all array elements and their sum using DMA

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main_2_6()
{
    int i,sum=0,n;
    printf("Enter no of array elements: ");
    scanf("%d",&n);

    int *a;
    a=(int *)malloc(n*sizeof(int));
    printf("Enter array elements: ");
    for(i=0;i<n;i++)
    {
    scanf("%d",a+i);
    sum+=*(a+i);
    }

    printf("\nArray entered is ");
    for(i=0;i<n;i++)
    printf("%d ",*(a+i));
    printf("\nSum of array elements is %d",sum);

    getch();
    return 0;

}