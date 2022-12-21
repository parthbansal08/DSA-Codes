// WAP to read an array of integers and search for an element using linear search.
#include <stdio.h>
#include <stdlib.h>
int lin_sear_a9_1(int *arr, int len, int key)
{
    for (int i = 0; i < len; i++)
        if (arr[i] == key)
            return i+1;
    return 0;
}
int main_9_1()
{
    printf("Enter size of array: ");
    int n;
    scanf("%d", &n);
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Error. Memory Not Allocated.");
        return 1;
    }

    printf("Enter elements of array: ");
    for (int i = 0; i < n; i++)
        scanf("%d", (arr + i));

    printf("Enter element to search: ");
    int key;
    scanf("%d",&key);

    int pos = lin_sear_a9_1(arr,n,key);

    if(pos)
    printf("\nElement Found at Position %d\n",pos);
    else
    printf("\nElement Not Found.\n");

    return 0;
}