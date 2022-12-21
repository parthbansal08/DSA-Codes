#include<stdio.h>

int main_1_5(){
    //value intake
    int a,b;
    int n,i;
    printf("Size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    //sorting;
    for (i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    //printing sorted array
    printf("Sorted array: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //checking number
    printf("Number between %d and %d are : ",a,b);
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= a && arr[i] <= b )
        {
            printf("%d ",arr[i]);
        }
    }

}